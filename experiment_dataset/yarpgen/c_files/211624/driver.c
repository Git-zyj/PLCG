#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11737462888959103002ULL;
signed char var_3 = (signed char)93;
unsigned int var_4 = 2810634527U;
long long int var_5 = -5780904564798287894LL;
signed char var_6 = (signed char)-78;
long long int var_7 = -7375380365716445081LL;
int zero = 0;
unsigned char var_11 = (unsigned char)185;
unsigned long long int var_12 = 8178022938183650342ULL;
int var_13 = -896626808;
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
