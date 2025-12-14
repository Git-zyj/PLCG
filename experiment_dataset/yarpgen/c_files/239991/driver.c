#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-37;
short var_5 = (short)30258;
signed char var_11 = (signed char)9;
long long int var_13 = -2498420094668791811LL;
unsigned char var_14 = (unsigned char)93;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = 650719830;
unsigned char var_19 = (unsigned char)30;
_Bool var_20 = (_Bool)1;
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
