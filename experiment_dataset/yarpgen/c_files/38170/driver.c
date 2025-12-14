#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)120;
signed char var_10 = (signed char)13;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 1847619923668215669ULL;
int zero = 0;
signed char var_14 = (signed char)69;
signed char var_15 = (signed char)111;
long long int var_16 = 6896910066519216923LL;
int var_17 = 1964527121;
unsigned long long int var_18 = 15747243421364094857ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
