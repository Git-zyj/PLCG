#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8695850341623694387ULL;
signed char var_2 = (signed char)69;
unsigned short var_11 = (unsigned short)15983;
unsigned char var_13 = (unsigned char)33;
int zero = 0;
unsigned long long int var_18 = 8805963332606361118ULL;
long long int var_19 = 5139545455132570610LL;
long long int var_20 = 3677151098392697109LL;
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
