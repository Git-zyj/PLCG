#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3509633815U;
int var_11 = -384610289;
_Bool var_15 = (_Bool)1;
long long int var_16 = 4663330354578263997LL;
short var_17 = (short)736;
int zero = 0;
int var_18 = -412273035;
int var_19 = -316920733;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3983515903U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
