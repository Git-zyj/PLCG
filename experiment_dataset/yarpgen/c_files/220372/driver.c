#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3221961335U;
unsigned short var_2 = (unsigned short)55614;
short var_5 = (short)-6095;
int var_8 = 552464929;
unsigned short var_9 = (unsigned short)2840;
int zero = 0;
unsigned long long int var_12 = 14206008209677481611ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
