#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2578454608U;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)65295;
int var_9 = 1178974195;
int zero = 0;
signed char var_10 = (signed char)-64;
signed char var_11 = (signed char)-66;
signed char var_12 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
