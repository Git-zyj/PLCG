#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 140305759;
unsigned char var_3 = (unsigned char)147;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_9 = 9079014661745681839LL;
signed char var_11 = (signed char)40;
int var_12 = -1069890104;
int zero = 0;
unsigned short var_14 = (unsigned short)49746;
int var_15 = -1099787600;
unsigned long long int var_16 = 3568515218559724365ULL;
unsigned char var_17 = (unsigned char)128;
unsigned char var_18 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
