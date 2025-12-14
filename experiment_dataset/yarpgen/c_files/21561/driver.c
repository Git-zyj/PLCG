#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4587849840273947100LL;
unsigned short var_1 = (unsigned short)56095;
unsigned char var_2 = (unsigned char)68;
unsigned long long int var_4 = 18207601262421444689ULL;
long long int var_5 = -4115097488400694650LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 11208693497743729399ULL;
short var_10 = (short)19142;
unsigned long long int var_11 = 7603466857825720786ULL;
unsigned int var_12 = 446342408U;
unsigned int var_13 = 1304115749U;
unsigned long long int var_14 = 821183357223685047ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3846216284U;
signed char var_17 = (signed char)-7;
int zero = 0;
unsigned int var_18 = 2271296124U;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
