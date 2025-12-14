#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7463064567188946627LL;
unsigned short var_2 = (unsigned short)47943;
unsigned short var_4 = (unsigned short)59327;
unsigned short var_5 = (unsigned short)36906;
int var_6 = 932335450;
unsigned long long int var_8 = 1332307535398137622ULL;
unsigned long long int var_12 = 2957214502037685547ULL;
int var_13 = 756444661;
long long int var_14 = -3361824728308921587LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -2135921404;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
