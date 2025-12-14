#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 58191635U;
unsigned int var_3 = 2186713990U;
signed char var_5 = (signed char)98;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 5103429634971651822ULL;
short var_9 = (short)-6131;
int zero = 0;
signed char var_15 = (signed char)-57;
unsigned int var_16 = 1504671446U;
unsigned int var_17 = 397644279U;
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
