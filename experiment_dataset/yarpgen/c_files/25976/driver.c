#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1581073064;
unsigned int var_4 = 1314965140U;
unsigned int var_5 = 4166791077U;
unsigned long long int var_8 = 9074775357267770113ULL;
long long int var_10 = -4314591218139957220LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-19925;
unsigned int var_18 = 211343414U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
