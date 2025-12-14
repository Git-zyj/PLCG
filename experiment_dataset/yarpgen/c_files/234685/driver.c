#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16951612321936223857ULL;
unsigned short var_1 = (unsigned short)60702;
unsigned char var_3 = (unsigned char)196;
short var_5 = (short)-3785;
unsigned short var_6 = (unsigned short)29658;
unsigned short var_7 = (unsigned short)20445;
long long int var_9 = 5051901212234589063LL;
long long int var_10 = -7136028495427726828LL;
short var_12 = (short)-31907;
long long int var_13 = -5848035929614785654LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)27627;
int zero = 0;
unsigned long long int var_16 = 4814200164110609489ULL;
unsigned char var_17 = (unsigned char)244;
unsigned int var_18 = 3829011382U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
