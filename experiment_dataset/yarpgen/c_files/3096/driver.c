#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)245;
short var_5 = (short)19118;
unsigned char var_7 = (unsigned char)56;
int zero = 0;
long long int var_13 = -278153586475162272LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -874563157366385326LL;
unsigned long long int var_16 = 11490335891147301026ULL;
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
