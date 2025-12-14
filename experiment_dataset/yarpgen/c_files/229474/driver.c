#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62164;
unsigned long long int var_4 = 3260137148057389944ULL;
long long int var_5 = -3560111177783014020LL;
int zero = 0;
unsigned long long int var_11 = 669654170584908273ULL;
unsigned long long int var_12 = 14181373053659146219ULL;
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
