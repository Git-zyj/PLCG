#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4199276422U;
int var_1 = 645490758;
int var_2 = -1679311103;
long long int var_4 = -7495890776241969612LL;
long long int var_5 = -7189655018748717155LL;
unsigned char var_6 = (unsigned char)32;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 5363073141540452567ULL;
long long int var_10 = -7752792849186532079LL;
int zero = 0;
unsigned long long int var_12 = 17744554163113777484ULL;
int var_13 = -335741876;
_Bool var_14 = (_Bool)1;
int var_15 = -770722342;
void init() {
}

void checksum() {
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
