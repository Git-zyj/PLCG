#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-51;
short var_6 = (short)-4558;
unsigned char var_11 = (unsigned char)162;
long long int var_14 = 6374748507399981950LL;
int zero = 0;
long long int var_15 = -7804243466625033352LL;
short var_16 = (short)4935;
unsigned char var_17 = (unsigned char)31;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
