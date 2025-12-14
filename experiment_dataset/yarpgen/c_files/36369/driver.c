#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -927809922;
signed char var_3 = (signed char)-110;
_Bool var_4 = (_Bool)0;
int var_6 = -672985201;
int var_8 = -375709953;
unsigned int var_9 = 1203413096U;
int var_10 = 886262473;
int zero = 0;
unsigned short var_11 = (unsigned short)12470;
unsigned long long int var_12 = 15494556209553006429ULL;
int var_13 = 959570367;
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
