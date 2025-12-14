#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1308502764U;
long long int var_3 = -2131772698651305177LL;
int var_4 = 1613678948;
long long int var_5 = -2655587583656918833LL;
unsigned short var_6 = (unsigned short)43319;
unsigned short var_7 = (unsigned short)65075;
unsigned short var_9 = (unsigned short)26125;
int zero = 0;
long long int var_10 = -7634055157228537818LL;
unsigned long long int var_11 = 321061732137344869ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
