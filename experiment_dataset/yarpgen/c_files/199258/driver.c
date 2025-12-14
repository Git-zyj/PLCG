#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3197939766U;
int var_3 = -597308902;
unsigned long long int var_4 = 4797204131640434668ULL;
short var_5 = (short)-17258;
unsigned long long int var_8 = 12840270765941030026ULL;
unsigned long long int var_12 = 8756338012223266612ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -7793074921150709591LL;
unsigned long long int var_15 = 11713550559253298729ULL;
unsigned short var_16 = (unsigned short)59833;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
