#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2552167399688359600LL;
unsigned char var_3 = (unsigned char)165;
int var_5 = -441658850;
int var_7 = 71284266;
long long int var_10 = 3373361291234822513LL;
unsigned long long int var_12 = 11149446032192403446ULL;
long long int var_13 = -2261265098903861424LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7279664692762767301ULL;
unsigned int var_16 = 1458634930U;
short var_17 = (short)3016;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
