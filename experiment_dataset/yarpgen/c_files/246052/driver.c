#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1044;
unsigned long long int var_3 = 10012384525218960034ULL;
short var_7 = (short)11332;
unsigned long long int var_8 = 14514385602751876041ULL;
unsigned long long int var_9 = 15661069367895061205ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)120;
unsigned long long int var_15 = 13934631942542918095ULL;
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
