#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)100;
unsigned char var_2 = (unsigned char)115;
unsigned short var_3 = (unsigned short)1792;
unsigned short var_4 = (unsigned short)51028;
short var_6 = (short)22435;
int var_8 = 861824694;
unsigned char var_9 = (unsigned char)3;
int zero = 0;
unsigned char var_10 = (unsigned char)108;
unsigned char var_11 = (unsigned char)252;
_Bool var_12 = (_Bool)0;
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
