#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 641995173U;
_Bool var_2 = (_Bool)1;
signed char var_9 = (signed char)85;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2487724064U;
short var_13 = (short)-30772;
long long int var_14 = -940402447997419828LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)47000;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
