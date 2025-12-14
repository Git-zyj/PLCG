#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-32;
unsigned char var_7 = (unsigned char)128;
signed char var_11 = (signed char)-48;
unsigned char var_12 = (unsigned char)106;
int zero = 0;
unsigned char var_18 = (unsigned char)150;
unsigned int var_19 = 2850788277U;
void init() {
}

void checksum() {
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
