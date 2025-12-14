#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44769;
long long int var_4 = 7962765138239616377LL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)111;
unsigned short var_18 = (unsigned short)43962;
void init() {
}

void checksum() {
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
