#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15301;
long long int var_4 = 4406342961151391359LL;
short var_5 = (short)-3771;
short var_8 = (short)-29130;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)9942;
signed char var_14 = (signed char)125;
unsigned int var_16 = 42721957U;
int zero = 0;
unsigned long long int var_17 = 973150566740353022ULL;
int var_18 = -1683228399;
unsigned short var_19 = (unsigned short)22216;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
