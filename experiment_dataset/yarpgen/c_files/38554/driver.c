#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1722067200U;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)3682;
short var_5 = (short)12930;
signed char var_6 = (signed char)-51;
long long int var_7 = -2593801422727831127LL;
unsigned short var_8 = (unsigned short)35936;
unsigned long long int var_10 = 16858493042246978229ULL;
signed char var_11 = (signed char)71;
short var_12 = (short)-20072;
int zero = 0;
unsigned int var_13 = 3266478795U;
unsigned short var_14 = (unsigned short)62055;
unsigned char var_15 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
