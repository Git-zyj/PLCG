#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-110;
short var_6 = (short)1986;
int var_9 = -1372693553;
unsigned short var_10 = (unsigned short)18338;
unsigned int var_12 = 3577662297U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3282823054U;
signed char var_15 = (signed char)-36;
unsigned int var_16 = 1215049416U;
short var_17 = (short)-24786;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
