#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 593356717U;
int var_9 = -30388378;
signed char var_11 = (signed char)105;
short var_12 = (short)26983;
int var_14 = -1242855587;
int zero = 0;
signed char var_19 = (signed char)8;
int var_20 = -2049033061;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
