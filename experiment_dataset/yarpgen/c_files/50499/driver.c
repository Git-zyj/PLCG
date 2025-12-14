#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
long long int var_2 = 6559673430297949493LL;
unsigned char var_5 = (unsigned char)222;
unsigned short var_8 = (unsigned short)64476;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)194;
int zero = 0;
unsigned int var_14 = 1667636983U;
unsigned short var_15 = (unsigned short)53381;
unsigned short var_16 = (unsigned short)50080;
unsigned long long int var_17 = 1336288292257165753ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
