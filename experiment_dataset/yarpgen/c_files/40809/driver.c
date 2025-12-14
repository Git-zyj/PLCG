#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
unsigned int var_2 = 1956342213U;
unsigned char var_5 = (unsigned char)70;
unsigned long long int var_9 = 4094211443149555628ULL;
unsigned char var_10 = (unsigned char)116;
int var_13 = 90930066;
int var_19 = -1922914041;
int zero = 0;
int var_20 = -913357376;
int var_21 = -1006441113;
long long int var_22 = -2022650071644440039LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
