#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 4123939929U;
unsigned long long int var_6 = 3279075084905966880ULL;
unsigned long long int var_10 = 10949345737253237105ULL;
int var_17 = 367287213;
int zero = 0;
unsigned short var_20 = (unsigned short)7149;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)39205;
unsigned int var_23 = 1598881484U;
_Bool var_24 = (_Bool)0;
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
