#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10573843258860523244ULL;
unsigned int var_5 = 3615627001U;
unsigned long long int var_8 = 11600759976219320982ULL;
signed char var_15 = (signed char)-117;
int zero = 0;
long long int var_19 = 5040666998539567406LL;
signed char var_20 = (signed char)-49;
void init() {
}

void checksum() {
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
