#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 509894025;
unsigned short var_7 = (unsigned short)30503;
unsigned short var_8 = (unsigned short)19630;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_17 = -1230679198916912024LL;
int var_18 = -418348035;
void init() {
}

void checksum() {
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
