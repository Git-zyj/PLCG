#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2225527241U;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2275527316U;
long long int var_3 = 8939443677088451869LL;
unsigned long long int var_4 = 12255357240018918237ULL;
long long int var_5 = -7642778215979794344LL;
unsigned int var_6 = 1833494995U;
long long int var_7 = -5779020812758260408LL;
unsigned int var_8 = 699423973U;
long long int var_10 = -3518806089948532507LL;
unsigned int var_11 = 3123329927U;
long long int var_13 = 1469738636058751710LL;
unsigned long long int var_14 = 7565730389773905041ULL;
long long int var_16 = 7186633155310844276LL;
unsigned short var_17 = (unsigned short)48088;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)189;
int zero = 0;
unsigned short var_20 = (unsigned short)21965;
int var_21 = 1867330169;
short var_22 = (short)5161;
short var_23 = (short)-16093;
int var_24 = -391244137;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
