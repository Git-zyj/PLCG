#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3900;
signed char var_1 = (signed char)-18;
signed char var_2 = (signed char)-16;
unsigned short var_4 = (unsigned short)53254;
unsigned short var_5 = (unsigned short)45981;
unsigned short var_6 = (unsigned short)64806;
int zero = 0;
unsigned char var_10 = (unsigned char)188;
short var_11 = (short)-5863;
int var_12 = 1882961004;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
