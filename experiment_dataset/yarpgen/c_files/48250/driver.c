#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)12;
unsigned char var_3 = (unsigned char)115;
long long int var_5 = -750845931804069480LL;
unsigned char var_9 = (unsigned char)211;
unsigned char var_10 = (unsigned char)178;
unsigned char var_16 = (unsigned char)112;
int zero = 0;
int var_17 = 153667757;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)85;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
