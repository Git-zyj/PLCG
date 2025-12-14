#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1271180779;
signed char var_3 = (signed char)105;
_Bool var_4 = (_Bool)0;
long long int var_5 = -8686614319207552207LL;
unsigned long long int var_7 = 3430600140294874509ULL;
int var_8 = -2109890115;
unsigned char var_9 = (unsigned char)83;
unsigned long long int var_10 = 15609850738237663197ULL;
unsigned char var_11 = (unsigned char)49;
int var_12 = -1348187281;
unsigned char var_13 = (unsigned char)170;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 17866974092220653432ULL;
int zero = 0;
int var_20 = -1815228849;
unsigned char var_21 = (unsigned char)122;
unsigned long long int var_22 = 10282867278058054990ULL;
void init() {
}

void checksum() {
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
