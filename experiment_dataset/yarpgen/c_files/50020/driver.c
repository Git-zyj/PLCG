#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1088149581U;
long long int var_5 = 6855715946671118148LL;
unsigned long long int var_6 = 16544296309680877509ULL;
long long int var_7 = 3906848634570957237LL;
unsigned short var_11 = (unsigned short)35962;
long long int var_14 = 7435036535641576560LL;
int zero = 0;
int var_20 = -1721029660;
unsigned int var_21 = 1967160308U;
long long int var_22 = -4673560373154117059LL;
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
