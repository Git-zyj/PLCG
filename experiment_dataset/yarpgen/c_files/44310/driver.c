#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1718;
unsigned char var_4 = (unsigned char)164;
signed char var_6 = (signed char)54;
unsigned int var_10 = 1520566469U;
int zero = 0;
int var_15 = -1248859216;
unsigned long long int var_16 = 14721111215399692387ULL;
unsigned long long int var_17 = 12605463661058828256ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
