#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 15651600677522041322ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)29322;
int zero = 0;
unsigned char var_19 = (unsigned char)84;
long long int var_20 = 2952018245703012345LL;
unsigned short var_21 = (unsigned short)3153;
unsigned char var_22 = (unsigned char)176;
long long int var_23 = 4441359525140513645LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
