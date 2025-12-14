#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
long long int var_5 = 5874436852265338554LL;
unsigned char var_7 = (unsigned char)119;
int var_9 = -476961146;
unsigned long long int var_12 = 8433636753889970369ULL;
_Bool var_13 = (_Bool)1;
int var_17 = -176660851;
int zero = 0;
int var_20 = -1386535100;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3627838780U;
short var_23 = (short)180;
void init() {
}

void checksum() {
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
