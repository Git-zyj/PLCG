#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)781;
unsigned int var_8 = 1335394067U;
short var_11 = (short)-21781;
short var_12 = (short)-3233;
int zero = 0;
short var_14 = (short)-26759;
unsigned short var_15 = (unsigned short)22509;
int var_16 = -872038999;
unsigned long long int var_17 = 15238913574605644023ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
