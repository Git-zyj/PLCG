#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
unsigned char var_1 = (unsigned char)220;
long long int var_3 = 4324902858469306038LL;
unsigned short var_7 = (unsigned short)54895;
unsigned int var_13 = 1967805608U;
int zero = 0;
unsigned char var_18 = (unsigned char)129;
unsigned int var_19 = 1999975160U;
unsigned short var_20 = (unsigned short)43567;
unsigned long long int var_21 = 17530361357187282387ULL;
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
