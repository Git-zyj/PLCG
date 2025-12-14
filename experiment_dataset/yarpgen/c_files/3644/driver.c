#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_8 = -7667502621921721933LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 1223513427522339739ULL;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-19797;
int zero = 0;
short var_14 = (short)-10881;
long long int var_15 = 3719124554468061616LL;
long long int var_16 = -5663917216188600496LL;
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
