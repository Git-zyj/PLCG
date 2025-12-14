#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)189;
signed char var_4 = (signed char)81;
unsigned long long int var_7 = 15635072473223877524ULL;
unsigned long long int var_8 = 5582199636368280244ULL;
unsigned short var_9 = (unsigned short)44309;
int var_10 = 2077324653;
int zero = 0;
unsigned int var_13 = 1475157546U;
unsigned long long int var_14 = 8750226922907862394ULL;
short var_15 = (short)-5027;
short var_16 = (short)19795;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
