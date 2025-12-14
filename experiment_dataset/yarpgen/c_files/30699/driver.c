#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
unsigned char var_2 = (unsigned char)43;
int var_4 = 1480067079;
int var_5 = -1137512600;
long long int var_11 = 1451558678779735980LL;
int zero = 0;
int var_13 = 641533998;
unsigned short var_14 = (unsigned short)5129;
unsigned long long int var_15 = 12477116677764178506ULL;
unsigned short var_16 = (unsigned short)46013;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
