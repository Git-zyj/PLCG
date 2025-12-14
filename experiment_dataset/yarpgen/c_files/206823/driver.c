#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)30020;
int var_6 = -1156462866;
unsigned long long int var_12 = 5486706251333263365ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)12187;
short var_15 = (short)9670;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
