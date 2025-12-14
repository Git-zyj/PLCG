#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45361;
long long int var_8 = 5654509309581795632LL;
int var_10 = 1670071345;
unsigned short var_12 = (unsigned short)50295;
long long int var_14 = 7846336273197170372LL;
unsigned short var_15 = (unsigned short)29213;
unsigned char var_17 = (unsigned char)116;
int zero = 0;
unsigned short var_18 = (unsigned short)59849;
long long int var_19 = 2329910388244061783LL;
void init() {
}

void checksum() {
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
