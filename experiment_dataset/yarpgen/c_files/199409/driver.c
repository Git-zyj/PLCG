#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1079197661;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)18889;
int var_13 = 2077888804;
int zero = 0;
int var_19 = -2048295579;
unsigned char var_20 = (unsigned char)118;
long long int var_21 = 2573532047795007376LL;
signed char var_22 = (signed char)-16;
void init() {
}

void checksum() {
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
