#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)7;
unsigned short var_6 = (unsigned short)15777;
int var_9 = -901625178;
unsigned long long int var_10 = 5876780346412113426ULL;
int zero = 0;
signed char var_12 = (signed char)115;
unsigned int var_13 = 2621739475U;
unsigned short var_14 = (unsigned short)45205;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
