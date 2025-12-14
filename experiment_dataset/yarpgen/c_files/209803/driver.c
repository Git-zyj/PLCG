#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5536112028342980090ULL;
int var_1 = -102138125;
long long int var_2 = -6045828071244071486LL;
unsigned short var_3 = (unsigned short)31096;
unsigned short var_4 = (unsigned short)18841;
long long int var_6 = 1495584997332033189LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 1504885459399055604LL;
int zero = 0;
unsigned char var_10 = (unsigned char)128;
unsigned long long int var_11 = 5511557575605161333ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
