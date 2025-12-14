#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1535165471;
int var_3 = 1242045461;
int var_4 = -48692451;
unsigned int var_5 = 2660001782U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 8503563242798060390ULL;
unsigned char var_10 = (unsigned char)43;
unsigned char var_11 = (unsigned char)101;
unsigned char var_12 = (unsigned char)53;
unsigned int var_14 = 3328722147U;
int zero = 0;
unsigned int var_15 = 811577329U;
long long int var_16 = 4708243307342513641LL;
unsigned char var_17 = (unsigned char)133;
signed char var_18 = (signed char)-58;
unsigned short var_19 = (unsigned short)38181;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
