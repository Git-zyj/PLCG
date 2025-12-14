#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
signed char var_1 = (signed char)5;
unsigned char var_5 = (unsigned char)215;
signed char var_6 = (signed char)2;
unsigned long long int var_7 = 14046819076954107615ULL;
_Bool var_8 = (_Bool)0;
long long int var_13 = 7619852138809946019LL;
int zero = 0;
unsigned char var_14 = (unsigned char)184;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)86;
long long int var_17 = -5193034175929747900LL;
unsigned long long int var_18 = 4104366841798918412ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
