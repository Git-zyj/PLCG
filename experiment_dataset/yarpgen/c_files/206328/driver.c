#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6490;
long long int var_4 = -8771358156996605649LL;
short var_7 = (short)-8325;
int zero = 0;
int var_13 = -753723733;
_Bool var_14 = (_Bool)1;
int var_15 = -63476774;
long long int var_16 = 7368110108925751214LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
