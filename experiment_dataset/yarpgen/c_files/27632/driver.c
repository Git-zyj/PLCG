#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 8276236341756216827LL;
int var_3 = -414383186;
signed char var_14 = (signed char)40;
int zero = 0;
unsigned char var_15 = (unsigned char)138;
long long int var_16 = 912463341741000756LL;
unsigned int var_17 = 2018506489U;
unsigned char var_18 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
