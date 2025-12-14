#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16326254729224280419ULL;
unsigned long long int var_3 = 11915912006674120505ULL;
unsigned int var_5 = 1783048274U;
long long int var_6 = -6920592315967072343LL;
unsigned int var_8 = 835267626U;
unsigned long long int var_10 = 4918066319150107046ULL;
signed char var_11 = (signed char)-53;
unsigned long long int var_12 = 8089778504939983807ULL;
signed char var_15 = (signed char)58;
int zero = 0;
unsigned long long int var_16 = 8351206260631527674ULL;
int var_17 = -1797100881;
unsigned long long int var_18 = 277338373255477579ULL;
long long int var_19 = -2823060993080256433LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
