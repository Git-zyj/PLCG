#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
signed char var_2 = (signed char)1;
signed char var_4 = (signed char)40;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)43350;
int var_10 = 1228923550;
unsigned char var_11 = (unsigned char)50;
int zero = 0;
unsigned short var_15 = (unsigned short)26034;
short var_16 = (short)23467;
signed char var_17 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
