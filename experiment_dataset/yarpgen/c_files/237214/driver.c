#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 28806064U;
short var_8 = (short)7247;
unsigned long long int var_11 = 10214712788151149100ULL;
unsigned long long int var_13 = 11464065777304180896ULL;
unsigned int var_15 = 2907989318U;
int zero = 0;
unsigned long long int var_18 = 15673206794537566622ULL;
short var_19 = (short)17231;
unsigned long long int var_20 = 4247514857949599416ULL;
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
