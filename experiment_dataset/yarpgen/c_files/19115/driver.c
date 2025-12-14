#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
unsigned short var_3 = (unsigned short)16365;
int var_6 = 1843934985;
unsigned long long int var_7 = 10798318044488564069ULL;
unsigned long long int var_8 = 810679211306254026ULL;
unsigned long long int var_15 = 4057711813693345758ULL;
int var_16 = -1474389592;
int zero = 0;
unsigned long long int var_18 = 5251124979510141313ULL;
unsigned int var_19 = 12321014U;
void init() {
}

void checksum() {
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
