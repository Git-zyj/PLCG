#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
short var_3 = (short)-19605;
unsigned short var_4 = (unsigned short)27866;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 4600214166754815913ULL;
short var_12 = (short)-14717;
int var_14 = 81778438;
int zero = 0;
int var_16 = -1203757073;
unsigned char var_17 = (unsigned char)94;
void init() {
}

void checksum() {
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
