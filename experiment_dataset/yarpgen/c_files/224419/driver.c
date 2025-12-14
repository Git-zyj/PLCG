#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 2000204691;
unsigned long long int var_2 = 4514219356696979421ULL;
unsigned long long int var_3 = 17168099416387381528ULL;
unsigned char var_5 = (unsigned char)144;
unsigned long long int var_7 = 13932644278471473844ULL;
int var_8 = 2113781022;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)13020;
int zero = 0;
int var_13 = 85788343;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
