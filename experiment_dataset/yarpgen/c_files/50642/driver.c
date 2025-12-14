#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16132796629143289483ULL;
short var_4 = (short)-25812;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)704;
unsigned long long int var_13 = 16138704163859851192ULL;
unsigned long long int var_15 = 18422678214848615349ULL;
int zero = 0;
short var_18 = (short)-18574;
long long int var_19 = 2238270523288707923LL;
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
