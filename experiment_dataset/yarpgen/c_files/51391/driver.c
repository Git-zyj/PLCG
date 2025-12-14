#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 637269692U;
unsigned long long int var_8 = 10908200449982639464ULL;
signed char var_11 = (signed char)-75;
int var_12 = 593926971;
int zero = 0;
unsigned long long int var_20 = 15276489782775724094ULL;
unsigned char var_21 = (unsigned char)187;
void init() {
}

void checksum() {
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
