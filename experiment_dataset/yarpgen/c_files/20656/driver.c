#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1152479254;
unsigned char var_6 = (unsigned char)25;
signed char var_11 = (signed char)74;
unsigned short var_15 = (unsigned short)40404;
int zero = 0;
int var_18 = -1555271516;
int var_19 = 1019502429;
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
