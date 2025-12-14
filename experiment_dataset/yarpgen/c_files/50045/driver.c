#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22059;
unsigned short var_1 = (unsigned short)49772;
signed char var_6 = (signed char)20;
unsigned long long int var_7 = 14750390556679336164ULL;
short var_8 = (short)9590;
long long int var_10 = 6309919004672425486LL;
unsigned char var_13 = (unsigned char)129;
long long int var_14 = 1152454881300129750LL;
signed char var_15 = (signed char)44;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-9804;
_Bool var_20 = (_Bool)1;
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
