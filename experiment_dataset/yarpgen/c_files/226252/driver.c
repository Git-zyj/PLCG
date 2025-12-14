#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -125670756;
int var_12 = -797959015;
int var_13 = -343855577;
unsigned short var_14 = (unsigned short)46335;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)16262;
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
