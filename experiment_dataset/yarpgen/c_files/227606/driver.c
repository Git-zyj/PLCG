#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
unsigned char var_2 = (unsigned char)142;
unsigned int var_5 = 2990953560U;
signed char var_13 = (signed char)-123;
long long int var_14 = 6858177716096005970LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 16842821716736838990ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)99;
unsigned char var_19 = (unsigned char)29;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)40924;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
