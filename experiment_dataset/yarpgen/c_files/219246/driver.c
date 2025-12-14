#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
unsigned int var_2 = 27057894U;
unsigned int var_4 = 615063163U;
unsigned char var_5 = (unsigned char)170;
long long int var_6 = 1825970665225841873LL;
unsigned int var_7 = 48652125U;
unsigned short var_8 = (unsigned short)55882;
long long int var_9 = -7500213772324035895LL;
int zero = 0;
unsigned char var_10 = (unsigned char)164;
unsigned short var_11 = (unsigned short)41435;
unsigned long long int var_12 = 1944665097988166416ULL;
long long int var_13 = 3806213848343509498LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
