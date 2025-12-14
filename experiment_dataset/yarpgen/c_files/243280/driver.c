#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6535791524893388122ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3075715522U;
unsigned long long int var_7 = 17541321473692119244ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 162088702U;
int zero = 0;
unsigned short var_12 = (unsigned short)15969;
short var_13 = (short)22157;
unsigned short var_14 = (unsigned short)42412;
unsigned short var_15 = (unsigned short)55883;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
