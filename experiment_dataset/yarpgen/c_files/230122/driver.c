#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2806421357U;
unsigned int var_2 = 4049939985U;
long long int var_4 = 2530671015927338754LL;
long long int var_6 = 97599335511621175LL;
unsigned char var_7 = (unsigned char)106;
signed char var_9 = (signed char)-23;
signed char var_10 = (signed char)126;
unsigned int var_13 = 2741146012U;
int zero = 0;
long long int var_15 = -7887347663764201839LL;
unsigned char var_16 = (unsigned char)5;
signed char var_17 = (signed char)-117;
long long int var_18 = 4311746957820393808LL;
int var_19 = 1553508081;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
