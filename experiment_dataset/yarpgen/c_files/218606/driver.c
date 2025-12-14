#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12116;
unsigned long long int var_1 = 744622355096415728ULL;
short var_2 = (short)-31979;
long long int var_3 = 8401386277032452807LL;
unsigned char var_8 = (unsigned char)18;
unsigned int var_10 = 873052642U;
int zero = 0;
unsigned short var_11 = (unsigned short)50317;
short var_12 = (short)25967;
int var_13 = 897654737;
void init() {
}

void checksum() {
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
