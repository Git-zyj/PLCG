#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3620701762U;
unsigned char var_7 = (unsigned char)185;
unsigned char var_15 = (unsigned char)89;
int zero = 0;
unsigned int var_17 = 4072786870U;
unsigned int var_18 = 583895915U;
unsigned int var_19 = 2626019794U;
void init() {
}

void checksum() {
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
