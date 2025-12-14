#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1335493479;
int var_4 = 716208067;
long long int var_5 = 133346805702302064LL;
unsigned long long int var_6 = 8163712507570589771ULL;
unsigned char var_7 = (unsigned char)128;
int var_8 = 860316917;
unsigned long long int var_12 = 10124971614468817249ULL;
int zero = 0;
int var_15 = -1280538386;
long long int var_16 = -4940900808652991913LL;
unsigned int var_17 = 3086990815U;
unsigned int var_18 = 2537512615U;
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
