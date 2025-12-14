#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2479741880U;
short var_2 = (short)13749;
unsigned char var_3 = (unsigned char)54;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-17348;
int zero = 0;
signed char var_10 = (signed char)48;
long long int var_11 = 8401561469061525650LL;
short var_12 = (short)-14918;
int var_13 = -1344213640;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
