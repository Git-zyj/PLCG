#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37350;
int var_3 = 1348219553;
long long int var_5 = -4755109332173502589LL;
unsigned long long int var_8 = 3655368833937308118ULL;
unsigned short var_9 = (unsigned short)50542;
unsigned char var_10 = (unsigned char)117;
unsigned int var_11 = 1644341364U;
int zero = 0;
long long int var_13 = 6410467546627269167LL;
int var_14 = 1245481195;
unsigned short var_15 = (unsigned short)64044;
unsigned short var_16 = (unsigned short)179;
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
