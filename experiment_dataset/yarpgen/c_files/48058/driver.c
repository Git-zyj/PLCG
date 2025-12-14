#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 520675572;
long long int var_5 = -6390318794317444969LL;
short var_7 = (short)-12847;
unsigned int var_8 = 1419692420U;
int var_9 = 2139391211;
short var_10 = (short)-10047;
short var_14 = (short)16528;
int zero = 0;
unsigned long long int var_15 = 6728067542127782869ULL;
_Bool var_16 = (_Bool)1;
int var_17 = -1683002938;
void init() {
}

void checksum() {
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
