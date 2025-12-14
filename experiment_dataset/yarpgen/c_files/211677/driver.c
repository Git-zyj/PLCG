#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -6078856707246539418LL;
unsigned char var_8 = (unsigned char)55;
long long int var_10 = -2067353503881081166LL;
unsigned int var_11 = 1842321646U;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)19354;
short var_17 = (short)11515;
long long int var_18 = -629738136516270637LL;
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
