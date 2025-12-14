#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
long long int var_1 = -6045480066046296855LL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)19980;
long long int var_4 = 4932994232301238578LL;
long long int var_5 = -4542974242185244599LL;
unsigned int var_6 = 3090189044U;
unsigned int var_7 = 2697335378U;
short var_8 = (short)-9115;
short var_9 = (short)-2481;
unsigned char var_10 = (unsigned char)225;
short var_11 = (short)29356;
int zero = 0;
unsigned long long int var_13 = 11085161942387792571ULL;
unsigned char var_14 = (unsigned char)131;
unsigned long long int var_15 = 14984945226860414176ULL;
unsigned char var_16 = (unsigned char)23;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
