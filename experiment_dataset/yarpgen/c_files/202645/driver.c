#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2297228638U;
unsigned long long int var_1 = 13530437424167596859ULL;
short var_4 = (short)-18111;
unsigned char var_5 = (unsigned char)48;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2249952909U;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
