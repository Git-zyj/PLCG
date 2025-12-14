#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
unsigned char var_1 = (unsigned char)50;
signed char var_4 = (signed char)55;
unsigned char var_8 = (unsigned char)27;
signed char var_11 = (signed char)-85;
unsigned long long int var_12 = 16746684056319089652ULL;
unsigned char var_13 = (unsigned char)192;
unsigned char var_14 = (unsigned char)116;
int zero = 0;
unsigned long long int var_17 = 10040461161058226405ULL;
int var_18 = 1937264569;
int var_19 = 1883374157;
int var_20 = 607523252;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
