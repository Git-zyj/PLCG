#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4209471041U;
unsigned int var_4 = 3631771264U;
unsigned short var_7 = (unsigned short)36521;
long long int var_11 = 7885587313481499751LL;
int zero = 0;
unsigned long long int var_14 = 11057785261968986563ULL;
unsigned char var_15 = (unsigned char)157;
unsigned short var_16 = (unsigned short)52621;
short var_17 = (short)6025;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
