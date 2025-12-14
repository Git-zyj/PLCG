#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1874193512616081137LL;
int var_1 = 170088250;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 6257742183227629297ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7926765476000225860ULL;
unsigned char var_6 = (unsigned char)150;
int var_7 = 1052546430;
unsigned long long int var_8 = 4995638746795434899ULL;
unsigned long long int var_10 = 6571271690238468349ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)149;
unsigned char var_12 = (unsigned char)2;
int var_13 = 1316298754;
unsigned char var_14 = (unsigned char)163;
unsigned char var_15 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
