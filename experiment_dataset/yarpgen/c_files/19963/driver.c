#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54503;
long long int var_1 = -6778218716059669606LL;
signed char var_2 = (signed char)11;
long long int var_3 = -930055214267499761LL;
int var_4 = 1940196406;
int var_5 = 845026736;
long long int var_7 = 541254066336964992LL;
unsigned char var_11 = (unsigned char)245;
signed char var_12 = (signed char)-91;
int zero = 0;
unsigned int var_13 = 426879192U;
long long int var_14 = 1048488752664320244LL;
long long int var_15 = -3821401724331967471LL;
long long int var_16 = -8695095666776180565LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
