#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3134704987U;
unsigned char var_3 = (unsigned char)137;
unsigned int var_4 = 634521828U;
unsigned char var_5 = (unsigned char)247;
unsigned int var_9 = 948721936U;
unsigned int var_11 = 286455910U;
unsigned int var_12 = 33915733U;
unsigned int var_18 = 4077226926U;
int zero = 0;
unsigned char var_19 = (unsigned char)137;
unsigned int var_20 = 3413308338U;
unsigned char var_21 = (unsigned char)218;
unsigned char var_22 = (unsigned char)85;
unsigned int var_23 = 2692632848U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
