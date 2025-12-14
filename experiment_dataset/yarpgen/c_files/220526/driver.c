#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23552;
long long int var_2 = -4819945823743470778LL;
signed char var_4 = (signed char)83;
signed char var_9 = (signed char)40;
signed char var_10 = (signed char)85;
short var_11 = (short)22812;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-85;
int zero = 0;
short var_16 = (short)28145;
short var_17 = (short)9353;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
