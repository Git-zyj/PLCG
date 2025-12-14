#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7655032613952217224LL;
short var_5 = (short)26249;
long long int var_9 = -597843114845118584LL;
unsigned short var_10 = (unsigned short)60887;
int zero = 0;
unsigned short var_14 = (unsigned short)43648;
short var_15 = (short)21482;
long long int var_16 = -3030037502665308498LL;
unsigned long long int var_17 = 3028137882973931918ULL;
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
