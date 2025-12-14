#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)131;
unsigned long long int var_3 = 9377292606094523332ULL;
unsigned long long int var_8 = 3240342212727519166ULL;
int zero = 0;
unsigned long long int var_11 = 776452666344429700ULL;
unsigned char var_12 = (unsigned char)66;
void init() {
}

void checksum() {
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
