#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 649114698880082471ULL;
int var_2 = -855536930;
unsigned char var_4 = (unsigned char)93;
int var_5 = 499565087;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-23121;
unsigned short var_11 = (unsigned short)39773;
short var_12 = (short)-3624;
short var_13 = (short)9008;
unsigned int var_14 = 2324532566U;
long long int var_15 = 6991081112222264235LL;
short var_16 = (short)12799;
int zero = 0;
short var_18 = (short)5417;
int var_19 = 1278366453;
short var_20 = (short)-25786;
_Bool var_21 = (_Bool)0;
short var_22 = (short)19928;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
