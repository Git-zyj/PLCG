#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8193349592874697068LL;
int var_3 = 597834250;
long long int var_4 = -4641478707357329756LL;
unsigned long long int var_5 = 724631192720378156ULL;
short var_7 = (short)19258;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 12947666136723193523ULL;
unsigned long long int var_13 = 517461063050463451ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = 741912255;
unsigned short var_17 = (unsigned short)32855;
unsigned long long int var_18 = 18010166263972753900ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
