#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-18746;
_Bool var_3 = (_Bool)1;
long long int var_4 = 1402568030615170520LL;
long long int var_5 = 1902185385437966719LL;
unsigned short var_8 = (unsigned short)10347;
unsigned short var_9 = (unsigned short)46395;
long long int var_11 = 6839376374595254495LL;
short var_12 = (short)1222;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 342418257467978496ULL;
unsigned long long int var_16 = 17759739896522459902ULL;
signed char var_17 = (signed char)55;
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
