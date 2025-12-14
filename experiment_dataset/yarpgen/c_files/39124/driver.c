#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -231595526476572860LL;
long long int var_1 = -3702634730335298909LL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)12322;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)225;
int zero = 0;
unsigned char var_20 = (unsigned char)62;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1401249815U;
unsigned long long int var_23 = 13417248534599504700ULL;
int var_24 = -357699617;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
