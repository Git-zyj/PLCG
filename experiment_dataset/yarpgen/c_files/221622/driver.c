#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_9 = 484385626;
int var_12 = -1189345355;
unsigned short var_13 = (unsigned short)65348;
unsigned short var_16 = (unsigned short)52552;
int zero = 0;
int var_18 = -413711463;
unsigned long long int var_19 = 3213735883032413236ULL;
int var_20 = -1611566350;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
