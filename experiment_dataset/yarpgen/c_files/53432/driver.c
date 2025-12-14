#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_5 = -1399995384;
unsigned short var_9 = (unsigned short)14792;
int var_11 = 2146449455;
long long int var_12 = -7544049306294640095LL;
signed char var_13 = (signed char)-41;
unsigned char var_17 = (unsigned char)201;
unsigned char var_18 = (unsigned char)187;
int zero = 0;
unsigned long long int var_19 = 6657242858268778393ULL;
unsigned char var_20 = (unsigned char)153;
unsigned int var_21 = 4212009628U;
signed char var_22 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
