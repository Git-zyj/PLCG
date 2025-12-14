#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13280657079899257032ULL;
unsigned long long int var_6 = 2990992215338340957ULL;
unsigned long long int var_7 = 12557044260640948470ULL;
long long int var_8 = -6401954580084726664LL;
unsigned char var_9 = (unsigned char)84;
unsigned long long int var_13 = 16747364439174973591ULL;
unsigned short var_14 = (unsigned short)26917;
int zero = 0;
unsigned char var_15 = (unsigned char)204;
short var_16 = (short)-14696;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6235994688743269935ULL;
void init() {
}

void checksum() {
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
