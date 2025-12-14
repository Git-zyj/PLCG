#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25201;
unsigned char var_4 = (unsigned char)5;
unsigned char var_5 = (unsigned char)82;
unsigned long long int var_6 = 10760155921896671050ULL;
unsigned int var_7 = 1107409979U;
int var_9 = 970132844;
unsigned char var_13 = (unsigned char)136;
int zero = 0;
unsigned long long int var_18 = 14135199338173724070ULL;
unsigned char var_19 = (unsigned char)22;
unsigned char var_20 = (unsigned char)134;
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
