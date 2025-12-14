#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)236;
long long int var_6 = -8794242169019989142LL;
unsigned long long int var_7 = 12131884470363969652ULL;
unsigned char var_8 = (unsigned char)162;
unsigned char var_9 = (unsigned char)95;
long long int var_11 = -4603742226348688934LL;
int zero = 0;
unsigned long long int var_12 = 6145997100490800254ULL;
unsigned long long int var_13 = 18146156187529130390ULL;
unsigned long long int var_14 = 17171204880469781317ULL;
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
