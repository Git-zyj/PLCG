#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 105166309;
int var_1 = 589880567;
long long int var_3 = -4007362126112455879LL;
signed char var_4 = (signed char)114;
int var_5 = 989221913;
_Bool var_6 = (_Bool)1;
int var_7 = 631791909;
unsigned long long int var_8 = 8721413712289752880ULL;
int var_10 = -1050827710;
int var_11 = -364422874;
short var_12 = (short)-19458;
unsigned long long int var_13 = 10996417766106672549ULL;
long long int var_14 = -8005142760876692858LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)62789;
int zero = 0;
unsigned int var_17 = 2208427080U;
int var_18 = -1888714712;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
