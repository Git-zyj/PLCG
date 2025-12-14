#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29949;
unsigned char var_5 = (unsigned char)67;
int var_8 = 83434922;
int var_16 = 2093880639;
int zero = 0;
signed char var_18 = (signed char)104;
signed char var_19 = (signed char)-1;
unsigned char var_20 = (unsigned char)225;
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
