#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)250;
signed char var_10 = (signed char)122;
long long int var_15 = 2250755501615825192LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = -9022722783138927424LL;
unsigned long long int var_20 = 8295309328689474657ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
