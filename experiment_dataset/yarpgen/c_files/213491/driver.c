#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 4260132517U;
unsigned short var_7 = (unsigned short)16771;
int zero = 0;
unsigned short var_11 = (unsigned short)56150;
unsigned long long int var_12 = 14231564127296229303ULL;
unsigned int var_13 = 3291880542U;
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
