#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 18252244387912070976ULL;
int var_10 = 1439619358;
long long int var_11 = -2762596400251577151LL;
int zero = 0;
unsigned char var_17 = (unsigned char)80;
signed char var_18 = (signed char)80;
unsigned char var_19 = (unsigned char)35;
unsigned short var_20 = (unsigned short)25616;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
