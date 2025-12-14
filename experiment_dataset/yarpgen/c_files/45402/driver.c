#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64115;
int var_6 = 2098855768;
int var_7 = -1473929434;
unsigned short var_8 = (unsigned short)44294;
unsigned short var_10 = (unsigned short)51757;
int var_11 = 111165281;
int zero = 0;
unsigned short var_13 = (unsigned short)15557;
unsigned short var_14 = (unsigned short)11454;
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
