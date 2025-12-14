#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned long long int var_1 = 13750310413974953223ULL;
unsigned long long int var_2 = 2269988914866086364ULL;
unsigned long long int var_3 = 14360223345864090636ULL;
unsigned long long int var_4 = 5989394245892620012ULL;
unsigned long long int var_5 = 15118921505253536539ULL;
int var_6 = 715732226;
unsigned long long int var_8 = 13573796728717402734ULL;
short var_9 = (short)32433;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)232;
long long int var_12 = -8309769101870799895LL;
short var_13 = (short)13578;
int zero = 0;
int var_14 = -858026753;
unsigned int var_15 = 1382578142U;
unsigned long long int var_16 = 2932826000751864056ULL;
int var_17 = -1288209608;
long long int var_18 = 4370789420135955568LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
