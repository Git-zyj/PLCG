#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4170701711155879745LL;
unsigned char var_3 = (unsigned char)19;
short var_4 = (short)24267;
int var_5 = -1348373363;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 14113024180403355650ULL;
unsigned short var_12 = (unsigned short)47737;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
