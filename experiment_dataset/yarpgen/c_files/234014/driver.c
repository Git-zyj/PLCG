#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2615;
unsigned int var_3 = 2761880358U;
short var_4 = (short)22042;
unsigned short var_5 = (unsigned short)60371;
_Bool var_7 = (_Bool)0;
unsigned int var_15 = 2623292044U;
unsigned short var_16 = (unsigned short)9651;
short var_18 = (short)-17863;
int zero = 0;
unsigned int var_19 = 285367848U;
unsigned char var_20 = (unsigned char)21;
short var_21 = (short)200;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
