#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9992;
unsigned long long int var_2 = 2768509784204559408ULL;
long long int var_3 = 244240533599736963LL;
unsigned long long int var_7 = 1013733048311647610ULL;
int zero = 0;
unsigned int var_12 = 1568552054U;
signed char var_13 = (signed char)56;
_Bool var_14 = (_Bool)0;
short var_15 = (short)22020;
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
