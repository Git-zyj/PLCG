#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7987157871912112910LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 8306352763796808196ULL;
unsigned short var_12 = (unsigned short)7631;
unsigned short var_15 = (unsigned short)8639;
unsigned int var_19 = 3869184225U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2449439699U;
unsigned long long int var_22 = 3013202304521282332ULL;
unsigned short var_23 = (unsigned short)23075;
void init() {
}

void checksum() {
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
