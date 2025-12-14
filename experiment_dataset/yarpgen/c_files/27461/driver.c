#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13127;
unsigned int var_5 = 2214099026U;
unsigned short var_7 = (unsigned short)8200;
unsigned int var_8 = 835198919U;
short var_10 = (short)6561;
unsigned long long int var_12 = 8786313387856649634ULL;
int zero = 0;
unsigned long long int var_13 = 4814658030450701496ULL;
unsigned long long int var_14 = 7546313072031180412ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
