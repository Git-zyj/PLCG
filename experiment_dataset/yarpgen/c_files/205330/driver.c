#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32674;
unsigned long long int var_3 = 5494794551844832632ULL;
int var_6 = 927719361;
unsigned long long int var_12 = 10947119193541617138ULL;
unsigned int var_15 = 3398010147U;
unsigned int var_16 = 2740890156U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2556544265U;
long long int var_20 = -8884310348224230173LL;
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
