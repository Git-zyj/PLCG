#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11433;
signed char var_2 = (signed char)-124;
_Bool var_8 = (_Bool)0;
short var_9 = (short)20830;
unsigned short var_11 = (unsigned short)47568;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)220;
unsigned long long int var_14 = 14193917253050818816ULL;
unsigned char var_15 = (unsigned char)79;
unsigned int var_16 = 1244932706U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
