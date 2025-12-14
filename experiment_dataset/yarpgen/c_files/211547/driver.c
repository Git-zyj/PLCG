#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-24648;
long long int var_5 = -5987625195048556467LL;
unsigned int var_6 = 1295457127U;
unsigned short var_7 = (unsigned short)29732;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = 8039787246088908560LL;
unsigned char var_17 = (unsigned char)85;
int var_18 = -2136951614;
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
