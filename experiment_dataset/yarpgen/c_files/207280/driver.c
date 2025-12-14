#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17087314936926294301ULL;
unsigned char var_6 = (unsigned char)12;
int zero = 0;
unsigned long long int var_13 = 16724138178250555059ULL;
unsigned short var_14 = (unsigned short)3767;
int var_15 = -216770375;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
