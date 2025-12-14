#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -331602341;
unsigned short var_2 = (unsigned short)13817;
_Bool var_5 = (_Bool)1;
long long int var_6 = 3013195218686102368LL;
unsigned char var_8 = (unsigned char)240;
_Bool var_10 = (_Bool)0;
short var_12 = (short)24892;
unsigned short var_14 = (unsigned short)40844;
int zero = 0;
unsigned int var_17 = 2444253471U;
unsigned long long int var_18 = 4416095674685005036ULL;
unsigned int var_19 = 964840435U;
long long int var_20 = -5547762799837157679LL;
unsigned long long int var_21 = 13097080246837353948ULL;
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
