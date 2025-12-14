#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)94;
long long int var_2 = 7568216875353806130LL;
short var_4 = (short)-9300;
short var_5 = (short)15328;
signed char var_6 = (signed char)7;
int var_8 = -1244747431;
long long int var_11 = -3326280439724194024LL;
unsigned long long int var_12 = 7169677984350105665ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)25204;
int var_17 = 332780221;
signed char var_18 = (signed char)-74;
signed char var_19 = (signed char)-116;
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
