#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2761166684U;
unsigned short var_2 = (unsigned short)9711;
long long int var_3 = 3884466127894559418LL;
unsigned long long int var_6 = 1322335989625897796ULL;
int var_7 = -1249595477;
short var_9 = (short)5479;
short var_13 = (short)-10849;
unsigned char var_14 = (unsigned char)93;
int zero = 0;
unsigned int var_15 = 1538339070U;
unsigned char var_16 = (unsigned char)63;
unsigned short var_17 = (unsigned short)1433;
unsigned char var_18 = (unsigned char)65;
long long int var_19 = 1865531631746735874LL;
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
