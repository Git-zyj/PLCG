#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-97;
unsigned long long int var_3 = 12427535799573237588ULL;
short var_8 = (short)17096;
signed char var_11 = (signed char)-77;
int zero = 0;
unsigned char var_14 = (unsigned char)84;
unsigned char var_15 = (unsigned char)253;
unsigned long long int var_16 = 8083522052033096927ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
