#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)157;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 9210637181125869912ULL;
signed char var_7 = (signed char)-94;
unsigned int var_11 = 2489675492U;
signed char var_12 = (signed char)93;
long long int var_13 = -7870539301336342559LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
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
