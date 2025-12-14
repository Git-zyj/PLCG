#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-66;
unsigned char var_8 = (unsigned char)232;
unsigned int var_12 = 3588313914U;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = 8979136408395938017LL;
long long int var_19 = 5694678224335573766LL;
short var_20 = (short)-26775;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
