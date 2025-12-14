#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -148775820;
unsigned short var_7 = (unsigned short)63207;
unsigned short var_9 = (unsigned short)54577;
unsigned short var_15 = (unsigned short)38467;
int zero = 0;
short var_17 = (short)-31536;
short var_18 = (short)19925;
short var_19 = (short)-28352;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
