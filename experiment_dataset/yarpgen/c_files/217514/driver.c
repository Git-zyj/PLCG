#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)167;
short var_1 = (short)7176;
long long int var_2 = -2924585908216368496LL;
unsigned long long int var_3 = 16405106998609137852ULL;
short var_4 = (short)434;
unsigned long long int var_5 = 18199451605625033950ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)13182;
long long int var_9 = 7582151884593242432LL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-28156;
int zero = 0;
unsigned long long int var_14 = 12593426216559788911ULL;
long long int var_15 = -6390874993458105014LL;
unsigned long long int var_16 = 11146201522804392045ULL;
void init() {
}

void checksum() {
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
