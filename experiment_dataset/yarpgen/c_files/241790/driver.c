#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24793;
unsigned long long int var_1 = 12267528456875757789ULL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 1404616203812658837LL;
unsigned short var_7 = (unsigned short)8492;
unsigned long long int var_8 = 1148409823519505331ULL;
short var_10 = (short)-778;
int zero = 0;
short var_11 = (short)-28282;
short var_12 = (short)-18378;
short var_13 = (short)-4890;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
