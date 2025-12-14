#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -840002336;
unsigned short var_1 = (unsigned short)16211;
unsigned short var_3 = (unsigned short)20531;
unsigned short var_4 = (unsigned short)50086;
unsigned short var_7 = (unsigned short)54550;
int var_8 = -159145322;
int var_9 = 689958675;
unsigned int var_10 = 308855997U;
int zero = 0;
unsigned short var_11 = (unsigned short)30028;
unsigned short var_12 = (unsigned short)19561;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
