#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43274;
long long int var_2 = 442658222076653910LL;
long long int var_3 = -3141541713517379181LL;
unsigned short var_8 = (unsigned short)48821;
long long int var_11 = -6586047762756681364LL;
int zero = 0;
short var_12 = (short)6631;
short var_13 = (short)7560;
void init() {
}

void checksum() {
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
