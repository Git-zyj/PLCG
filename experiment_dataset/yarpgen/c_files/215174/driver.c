#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)54;
unsigned char var_3 = (unsigned char)249;
int var_4 = 903283012;
int var_9 = -716452977;
unsigned int var_16 = 960099814U;
int zero = 0;
signed char var_18 = (signed char)35;
unsigned char var_19 = (unsigned char)142;
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
