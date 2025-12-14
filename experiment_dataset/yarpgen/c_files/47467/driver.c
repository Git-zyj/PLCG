#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5694293416733327562ULL;
unsigned long long int var_4 = 12997639728123749644ULL;
unsigned long long int var_15 = 7653431472224045673ULL;
unsigned long long int var_16 = 10651004296038473051ULL;
int zero = 0;
unsigned long long int var_17 = 18298235527197109813ULL;
unsigned long long int var_18 = 12739507887376669591ULL;
unsigned long long int var_19 = 2662615999079924048ULL;
unsigned long long int var_20 = 14055664173649486611ULL;
unsigned long long int var_21 = 5764047245194492071ULL;
unsigned long long int var_22 = 17820827251300509127ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
