#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 138154044;
long long int var_2 = 7647224830868292347LL;
unsigned char var_3 = (unsigned char)93;
unsigned long long int var_5 = 8099851986150444095ULL;
short var_6 = (short)2330;
unsigned long long int var_8 = 3197552838243896525ULL;
long long int var_9 = 2608600951702633439LL;
int var_11 = -1469305923;
short var_12 = (short)22851;
int var_15 = 1272210503;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)45;
void init() {
}

void checksum() {
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
