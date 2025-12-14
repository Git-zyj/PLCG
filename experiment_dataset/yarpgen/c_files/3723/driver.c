#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4692411786436185220LL;
long long int var_6 = 4993962990171685504LL;
unsigned short var_9 = (unsigned short)16332;
unsigned long long int var_11 = 11901655040922214833ULL;
int zero = 0;
unsigned long long int var_12 = 859411153474166220ULL;
signed char var_13 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
