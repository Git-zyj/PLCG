#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1533;
_Bool var_1 = (_Bool)1;
short var_2 = (short)26765;
short var_3 = (short)-20981;
long long int var_5 = -313491898564302531LL;
short var_7 = (short)1751;
short var_8 = (short)13609;
unsigned long long int var_10 = 18260618434382388661ULL;
signed char var_11 = (signed char)56;
_Bool var_14 = (_Bool)0;
int var_15 = -348522246;
long long int var_17 = -6828584053016264095LL;
int zero = 0;
signed char var_19 = (signed char)30;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)62668;
unsigned long long int var_22 = 4768607706597844360ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
