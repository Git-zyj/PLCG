#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 15308280032525915196ULL;
signed char var_4 = (signed char)28;
unsigned int var_5 = 2430295950U;
signed char var_6 = (signed char)41;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 14109029841140955873ULL;
signed char var_14 = (signed char)-24;
signed char var_15 = (signed char)-113;
unsigned int var_16 = 3174504080U;
long long int var_17 = 6771524018009101392LL;
signed char var_18 = (signed char)96;
int zero = 0;
int var_19 = 1115180489;
int var_20 = 550223401;
unsigned long long int var_21 = 11038540591975073266ULL;
short var_22 = (short)11513;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 1679596018U;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)-66;
long long int var_27 = 4053253936973446605LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
