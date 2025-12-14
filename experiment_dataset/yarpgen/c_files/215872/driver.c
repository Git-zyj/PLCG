#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 757798598;
unsigned short var_3 = (unsigned short)60671;
int var_5 = -607558482;
unsigned short var_8 = (unsigned short)54760;
int zero = 0;
unsigned short var_13 = (unsigned short)56437;
unsigned long long int var_14 = 16979262249591478867ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
