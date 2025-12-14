#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-821;
unsigned int var_2 = 780311781U;
int var_6 = -1928555325;
unsigned long long int var_7 = 50463911395100020ULL;
unsigned short var_8 = (unsigned short)26080;
unsigned int var_10 = 1650444180U;
unsigned short var_14 = (unsigned short)26556;
unsigned short var_17 = (unsigned short)23588;
int zero = 0;
unsigned int var_18 = 379268217U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2941781793U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
