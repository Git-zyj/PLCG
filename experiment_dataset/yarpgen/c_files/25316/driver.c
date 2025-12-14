#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2605399849U;
unsigned char var_9 = (unsigned char)246;
signed char var_10 = (signed char)10;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)49;
int zero = 0;
unsigned int var_17 = 4020199871U;
short var_18 = (short)-8680;
long long int var_19 = 5878377903379940846LL;
void init() {
}

void checksum() {
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
