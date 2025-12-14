#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)23681;
short var_5 = (short)-18106;
long long int var_6 = -6389122186606872154LL;
unsigned short var_10 = (unsigned short)37940;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_17 = 3652995684603630578LL;
unsigned short var_18 = (unsigned short)38494;
void init() {
}

void checksum() {
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
