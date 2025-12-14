#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8431649370952693075ULL;
unsigned int var_3 = 2549995722U;
long long int var_5 = 5662220741565775151LL;
long long int var_7 = 1291983109432483373LL;
unsigned short var_10 = (unsigned short)27045;
unsigned int var_15 = 2106541962U;
long long int var_18 = 2826265912328920263LL;
int zero = 0;
long long int var_19 = -6974650476270295138LL;
unsigned char var_20 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
