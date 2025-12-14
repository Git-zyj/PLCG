#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 457149665U;
unsigned char var_2 = (unsigned char)138;
unsigned long long int var_3 = 6540136109121084800ULL;
long long int var_8 = 2171794852060768296LL;
long long int var_10 = -2198645665418846799LL;
long long int var_11 = 1784524394101478720LL;
int var_12 = -1882304088;
int zero = 0;
unsigned char var_14 = (unsigned char)54;
unsigned char var_15 = (unsigned char)221;
unsigned int var_16 = 911499367U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
