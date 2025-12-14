#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45190;
long long int var_1 = -848217338569171826LL;
long long int var_5 = -2516615784063561440LL;
signed char var_10 = (signed char)103;
short var_12 = (short)13132;
unsigned long long int var_13 = 1064024319975286363ULL;
long long int var_15 = 2659027371733890750LL;
int zero = 0;
unsigned char var_18 = (unsigned char)159;
long long int var_19 = -6029564691894589063LL;
void init() {
}

void checksum() {
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
