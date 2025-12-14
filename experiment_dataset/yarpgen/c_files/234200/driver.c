#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 928869640;
unsigned short var_8 = (unsigned short)60766;
int var_10 = 354670523;
long long int var_14 = 8202501956764339142LL;
int zero = 0;
short var_15 = (short)-10149;
long long int var_16 = 6539711538244183312LL;
long long int var_17 = -2546558998383946193LL;
short var_18 = (short)-7857;
signed char var_19 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
