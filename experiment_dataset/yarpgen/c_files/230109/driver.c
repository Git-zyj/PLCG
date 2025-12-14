#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 6836207677882831590LL;
long long int var_7 = 4649042280688435753LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -1244115306373745348LL;
unsigned long long int var_10 = 10229046502012426391ULL;
int zero = 0;
signed char var_12 = (signed char)-122;
unsigned short var_13 = (unsigned short)3873;
short var_14 = (short)8016;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
