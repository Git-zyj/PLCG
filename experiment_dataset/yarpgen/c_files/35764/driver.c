#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-104;
unsigned short var_6 = (unsigned short)61857;
_Bool var_7 = (_Bool)1;
unsigned short var_14 = (unsigned short)12962;
int zero = 0;
long long int var_17 = 6565792632239215779LL;
short var_18 = (short)423;
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
