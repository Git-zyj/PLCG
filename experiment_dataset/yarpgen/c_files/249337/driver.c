#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)150;
unsigned char var_3 = (unsigned char)203;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)125;
short var_7 = (short)-14540;
unsigned short var_8 = (unsigned short)44368;
unsigned char var_9 = (unsigned char)170;
int zero = 0;
unsigned int var_13 = 2923366353U;
unsigned long long int var_14 = 12878492563830334897ULL;
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
