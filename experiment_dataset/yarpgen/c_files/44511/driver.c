#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)217;
unsigned char var_3 = (unsigned char)9;
unsigned int var_5 = 3893590680U;
int var_6 = 1875052024;
unsigned long long int var_10 = 687114987557008174ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)43082;
unsigned char var_17 = (unsigned char)135;
short var_18 = (short)554;
long long int var_19 = 8582967309324740449LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
