#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2830191598945104867ULL;
unsigned int var_3 = 3337737116U;
_Bool var_4 = (_Bool)1;
short var_8 = (short)-25865;
signed char var_9 = (signed char)-88;
int zero = 0;
unsigned long long int var_11 = 15115459215181344303ULL;
short var_12 = (short)8795;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
