#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
unsigned char var_2 = (unsigned char)167;
_Bool var_4 = (_Bool)1;
short var_5 = (short)12622;
int var_9 = 1008127086;
unsigned short var_10 = (unsigned short)41786;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)52310;
int var_16 = 230441814;
unsigned long long int var_17 = 2603122990634329075ULL;
int var_18 = -1773722397;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
