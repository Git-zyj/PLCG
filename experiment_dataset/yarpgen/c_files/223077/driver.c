#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3275538508448690483LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_17 = 5031357857806217606ULL;
long long int var_19 = 8440027430836084539LL;
int zero = 0;
unsigned long long int var_20 = 14942452196164644440ULL;
unsigned short var_21 = (unsigned short)64549;
short var_22 = (short)-32628;
short var_23 = (short)22789;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
