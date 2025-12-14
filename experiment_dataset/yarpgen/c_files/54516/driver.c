#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12643;
int var_4 = 1460266019;
unsigned short var_7 = (unsigned short)46411;
unsigned int var_8 = 352766606U;
int var_11 = -939628262;
long long int var_13 = -7930204105964402421LL;
int zero = 0;
int var_14 = -896388362;
short var_15 = (short)3270;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
