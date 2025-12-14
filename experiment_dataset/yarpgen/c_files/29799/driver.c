#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
signed char var_1 = (signed char)83;
unsigned char var_3 = (unsigned char)75;
unsigned long long int var_5 = 13450872133907100517ULL;
signed char var_6 = (signed char)-88;
unsigned long long int var_7 = 7910723997563040463ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)61709;
signed char var_11 = (signed char)121;
long long int var_12 = -291347403608903421LL;
int zero = 0;
short var_13 = (short)7729;
long long int var_14 = 5474539158872869397LL;
signed char var_15 = (signed char)49;
short var_16 = (short)1916;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
