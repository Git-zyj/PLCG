#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3857152105U;
int var_2 = 1522000922;
unsigned long long int var_4 = 1542050702595868012ULL;
signed char var_5 = (signed char)-82;
unsigned long long int var_6 = 4757983316026441806ULL;
unsigned char var_7 = (unsigned char)113;
unsigned long long int var_8 = 6123292894139605568ULL;
unsigned long long int var_10 = 3810230457666737452ULL;
int zero = 0;
unsigned long long int var_11 = 1432722872218357793ULL;
signed char var_12 = (signed char)-51;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
