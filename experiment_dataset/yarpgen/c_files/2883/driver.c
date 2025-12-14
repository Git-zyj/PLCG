#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_6 = (unsigned char)106;
long long int var_8 = -3311756482091367036LL;
_Bool var_10 = (_Bool)1;
int var_11 = -2107237166;
int var_12 = -308573474;
long long int var_13 = -4930385582733006106LL;
unsigned long long int var_14 = 9209222574180410938ULL;
int var_15 = 1951314957;
short var_16 = (short)-27188;
int zero = 0;
unsigned char var_18 = (unsigned char)185;
short var_19 = (short)-22505;
_Bool var_20 = (_Bool)1;
int var_21 = -1043221264;
void init() {
}

void checksum() {
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
