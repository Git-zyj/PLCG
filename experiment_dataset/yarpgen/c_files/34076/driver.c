#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7591679186690634836ULL;
unsigned short var_4 = (unsigned short)2385;
long long int var_6 = 1659174771518121752LL;
signed char var_12 = (signed char)-42;
int zero = 0;
long long int var_18 = 952434942613979273LL;
_Bool var_19 = (_Bool)0;
int var_20 = 1079618624;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
