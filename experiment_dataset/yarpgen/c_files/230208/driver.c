#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 385312528U;
long long int var_5 = 6840025709811648840LL;
long long int var_8 = -4634718604468990628LL;
_Bool var_9 = (_Bool)1;
int var_10 = -903581218;
unsigned short var_13 = (unsigned short)40201;
unsigned int var_14 = 2125448974U;
long long int var_16 = -7858505235939239247LL;
unsigned char var_17 = (unsigned char)84;
int zero = 0;
short var_18 = (short)-9143;
signed char var_19 = (signed char)-90;
signed char var_20 = (signed char)72;
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
