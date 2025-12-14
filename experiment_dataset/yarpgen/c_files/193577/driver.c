#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3796416970U;
short var_1 = (short)-3911;
long long int var_3 = -3362243652825836580LL;
unsigned char var_4 = (unsigned char)8;
unsigned char var_6 = (unsigned char)146;
long long int var_14 = 7865247427464285156LL;
signed char var_15 = (signed char)-85;
int zero = 0;
signed char var_17 = (signed char)-123;
unsigned int var_18 = 1651251977U;
long long int var_19 = -4887967837449173915LL;
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
