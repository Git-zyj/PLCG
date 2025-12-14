#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1488654194;
long long int var_1 = -4375616744382260176LL;
long long int var_2 = -8669624421312966449LL;
long long int var_6 = -5144468940785445291LL;
unsigned int var_7 = 2357528032U;
long long int var_9 = 8975822739106191561LL;
int zero = 0;
unsigned short var_14 = (unsigned short)51476;
signed char var_15 = (signed char)-56;
long long int var_16 = 142565978563550123LL;
void init() {
}

void checksum() {
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
