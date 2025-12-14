#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22543;
short var_6 = (short)1493;
short var_9 = (short)-13866;
unsigned char var_12 = (unsigned char)248;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -1945096594;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
