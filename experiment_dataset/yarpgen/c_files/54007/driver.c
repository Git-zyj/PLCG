#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4200402940U;
int var_2 = 818658855;
unsigned short var_6 = (unsigned short)57323;
unsigned char var_9 = (unsigned char)58;
int zero = 0;
unsigned long long int var_10 = 13968805932795832122ULL;
unsigned int var_11 = 1105898511U;
signed char var_12 = (signed char)-127;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
