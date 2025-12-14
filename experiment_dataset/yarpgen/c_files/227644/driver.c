#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52978;
short var_4 = (short)-16487;
unsigned long long int var_5 = 11633652697772317149ULL;
unsigned char var_7 = (unsigned char)59;
unsigned short var_9 = (unsigned short)50926;
long long int var_10 = 861299127237577363LL;
int zero = 0;
unsigned long long int var_11 = 8229957611186416680ULL;
long long int var_12 = -865043393265462071LL;
long long int var_13 = 7602947227697899185LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
