#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31443;
short var_3 = (short)14451;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)40473;
unsigned long long int var_8 = 9096818949671347930ULL;
int zero = 0;
long long int var_10 = 2485078385398288134LL;
short var_11 = (short)-32625;
unsigned short var_12 = (unsigned short)2684;
short var_13 = (short)18730;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
