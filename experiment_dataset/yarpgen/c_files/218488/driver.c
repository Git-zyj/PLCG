#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11381402549850623302ULL;
unsigned int var_3 = 2595781868U;
unsigned long long int var_7 = 7508173649928023950ULL;
long long int var_11 = 2789095730204703433LL;
int zero = 0;
unsigned long long int var_14 = 11807382807723827450ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
