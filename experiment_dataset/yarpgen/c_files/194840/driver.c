#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)86;
unsigned int var_5 = 1949376122U;
unsigned short var_6 = (unsigned short)4023;
unsigned int var_7 = 418116362U;
int var_11 = -430416684;
unsigned int var_14 = 626985676U;
unsigned short var_17 = (unsigned short)6504;
int zero = 0;
long long int var_20 = 6226569085065636395LL;
unsigned long long int var_21 = 10022002332796575410ULL;
short var_22 = (short)-32756;
signed char var_23 = (signed char)63;
unsigned long long int var_24 = 2772887917540822114ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
