#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 707051891;
unsigned int var_1 = 3995135620U;
signed char var_2 = (signed char)98;
long long int var_5 = 1833556598648008986LL;
short var_6 = (short)24289;
int var_7 = -1449278824;
long long int var_10 = 2653868645887441209LL;
unsigned int var_12 = 1486357044U;
unsigned char var_15 = (unsigned char)0;
unsigned int var_16 = 412795247U;
int zero = 0;
unsigned short var_18 = (unsigned short)52985;
unsigned int var_19 = 652453085U;
unsigned long long int var_20 = 1551951313158646595ULL;
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
