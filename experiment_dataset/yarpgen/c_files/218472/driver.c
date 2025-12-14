#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -817599473272246154LL;
long long int var_5 = -6227630781614372994LL;
unsigned short var_7 = (unsigned short)60698;
unsigned long long int var_8 = 13221681625892854440ULL;
unsigned long long int var_14 = 13427629167785950341ULL;
int zero = 0;
unsigned int var_18 = 2888290723U;
unsigned int var_19 = 4250658384U;
short var_20 = (short)8506;
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
