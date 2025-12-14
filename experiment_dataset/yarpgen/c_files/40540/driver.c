#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2758667442U;
signed char var_4 = (signed char)89;
_Bool var_5 = (_Bool)1;
long long int var_8 = 7195241977905047255LL;
int var_10 = 1755219500;
unsigned int var_11 = 1357299448U;
short var_12 = (short)29738;
unsigned int var_13 = 1921041453U;
_Bool var_14 = (_Bool)0;
long long int var_17 = -1508710066819730718LL;
int zero = 0;
unsigned short var_20 = (unsigned short)48605;
unsigned long long int var_21 = 9066867625873761802ULL;
unsigned long long int var_22 = 2756804787989995390ULL;
short var_23 = (short)-3221;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
