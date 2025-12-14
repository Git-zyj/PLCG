#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7110115277527319154ULL;
unsigned int var_7 = 1599097806U;
unsigned short var_8 = (unsigned short)14644;
short var_13 = (short)-6382;
int zero = 0;
long long int var_18 = 441955939809259802LL;
unsigned int var_19 = 2757817838U;
unsigned int var_20 = 777084027U;
short var_21 = (short)-26721;
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
