#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
int var_1 = 623595449;
unsigned char var_4 = (unsigned char)130;
int var_7 = 2022131197;
unsigned char var_9 = (unsigned char)187;
int zero = 0;
unsigned char var_11 = (unsigned char)167;
unsigned char var_12 = (unsigned char)246;
int var_13 = 1012814699;
unsigned char var_14 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
