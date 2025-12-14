#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)36207;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)7822;
unsigned int var_12 = 2978308143U;
unsigned long long int var_13 = 9594744201650125872ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1072500673U;
short var_20 = (short)-5800;
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
