#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1303030749405320104LL;
unsigned long long int var_1 = 13445241524280404643ULL;
short var_5 = (short)441;
long long int var_8 = -6747524701300402464LL;
int zero = 0;
unsigned long long int var_10 = 1007603030694737456ULL;
int var_11 = -2022336156;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
