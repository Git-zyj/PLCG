#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
unsigned short var_2 = (unsigned short)14831;
int var_3 = 899264727;
unsigned short var_4 = (unsigned short)57150;
int var_7 = -984585221;
unsigned char var_9 = (unsigned char)93;
unsigned int var_10 = 3658911557U;
unsigned short var_12 = (unsigned short)27672;
long long int var_13 = 8153468999749936488LL;
short var_14 = (short)-23878;
unsigned short var_17 = (unsigned short)47592;
int zero = 0;
unsigned char var_19 = (unsigned char)205;
long long int var_20 = 3111645763235107954LL;
short var_21 = (short)28397;
unsigned long long int var_22 = 17852971708343599598ULL;
short var_23 = (short)-5172;
long long int var_24 = 899895140001481128LL;
unsigned char var_25 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
