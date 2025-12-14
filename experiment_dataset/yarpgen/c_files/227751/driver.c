#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29191;
unsigned long long int var_3 = 2064097909714582517ULL;
short var_4 = (short)-23222;
int var_7 = 2098051655;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-21773;
int var_12 = 972153713;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
