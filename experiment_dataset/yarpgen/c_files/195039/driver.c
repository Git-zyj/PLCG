#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3331796114317722460LL;
unsigned int var_3 = 2251858231U;
unsigned short var_4 = (unsigned short)10986;
int var_5 = -652268801;
unsigned long long int var_6 = 5699200790704994376ULL;
unsigned char var_7 = (unsigned char)23;
unsigned char var_8 = (unsigned char)228;
unsigned short var_9 = (unsigned short)48128;
long long int var_10 = -1100402315893890103LL;
unsigned char var_11 = (unsigned char)61;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)63761;
unsigned char var_14 = (unsigned char)9;
int var_15 = -322541254;
unsigned short var_16 = (unsigned short)44005;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
