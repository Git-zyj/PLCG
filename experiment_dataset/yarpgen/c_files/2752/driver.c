#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3868269213590179151ULL;
unsigned long long int var_2 = 15860284244086829892ULL;
int var_8 = -2036990851;
unsigned short var_11 = (unsigned short)22304;
unsigned char var_13 = (unsigned char)165;
int var_15 = -1788508654;
int zero = 0;
unsigned long long int var_16 = 2937203958734979164ULL;
unsigned short var_17 = (unsigned short)12299;
signed char var_18 = (signed char)100;
unsigned long long int var_19 = 15968806381245363069ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
