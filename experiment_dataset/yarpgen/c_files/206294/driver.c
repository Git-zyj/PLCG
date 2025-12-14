#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23326;
int var_3 = 1092518400;
int var_4 = -2029246713;
int var_5 = 2046570248;
unsigned long long int var_6 = 15049569325153272954ULL;
unsigned long long int var_8 = 8228869235093564361ULL;
unsigned long long int var_10 = 9831976995295553678ULL;
long long int var_12 = -1288588380345550389LL;
unsigned short var_13 = (unsigned short)48790;
unsigned short var_14 = (unsigned short)50830;
unsigned long long int var_15 = 14432587483714239105ULL;
int zero = 0;
long long int var_16 = 3164734450349375446LL;
unsigned long long int var_17 = 300379002872582423ULL;
unsigned long long int var_18 = 5777217761182571357ULL;
unsigned long long int var_19 = 796810053501236406ULL;
void init() {
}

void checksum() {
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
