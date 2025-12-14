#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7815601542929514698ULL;
unsigned short var_3 = (unsigned short)62194;
long long int var_6 = -602520555472771628LL;
unsigned short var_13 = (unsigned short)61979;
short var_14 = (short)-9783;
int zero = 0;
unsigned long long int var_15 = 4654941246678004506ULL;
unsigned long long int var_16 = 17548870000337243733ULL;
void init() {
}

void checksum() {
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
