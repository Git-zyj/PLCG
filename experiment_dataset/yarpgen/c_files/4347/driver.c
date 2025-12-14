#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 707242899U;
int var_7 = 807040646;
short var_9 = (short)21607;
int zero = 0;
unsigned char var_14 = (unsigned char)194;
unsigned long long int var_15 = 14263591434054363745ULL;
signed char var_16 = (signed char)-125;
unsigned char var_17 = (unsigned char)8;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
