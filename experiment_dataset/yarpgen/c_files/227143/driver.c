#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)55;
unsigned char var_2 = (unsigned char)63;
unsigned char var_4 = (unsigned char)136;
unsigned char var_6 = (unsigned char)202;
unsigned char var_7 = (unsigned char)49;
unsigned char var_9 = (unsigned char)120;
unsigned char var_11 = (unsigned char)6;
unsigned char var_12 = (unsigned char)54;
long long int var_13 = 757948125465450700LL;
unsigned char var_14 = (unsigned char)69;
long long int var_15 = 6460295434208767740LL;
int zero = 0;
unsigned char var_17 = (unsigned char)148;
long long int var_18 = -1710110126674049180LL;
long long int var_19 = -8079186917666452505LL;
unsigned char var_20 = (unsigned char)15;
unsigned char var_21 = (unsigned char)4;
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
