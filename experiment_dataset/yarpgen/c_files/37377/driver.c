#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)55054;
unsigned short var_4 = (unsigned short)31841;
short var_5 = (short)20693;
long long int var_6 = 5307816671761204232LL;
long long int var_10 = 3159142506993136265LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 11371705496067109604ULL;
unsigned short var_13 = (unsigned short)49495;
unsigned long long int var_14 = 14900031866820300684ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
