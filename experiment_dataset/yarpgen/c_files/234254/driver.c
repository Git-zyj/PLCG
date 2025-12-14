#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13649;
unsigned long long int var_1 = 15927930796722185091ULL;
unsigned char var_3 = (unsigned char)140;
unsigned short var_4 = (unsigned short)55919;
unsigned short var_5 = (unsigned short)55292;
unsigned int var_6 = 4263260449U;
unsigned long long int var_8 = 2527078523631973456ULL;
short var_9 = (short)-10798;
long long int var_11 = 3850629810154674980LL;
unsigned long long int var_12 = 11886566436422336980ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)55;
int zero = 0;
short var_15 = (short)-12792;
long long int var_16 = 8031530865442762130LL;
int var_17 = 1173748978;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 9174532609926095271ULL;
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
