#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)65;
unsigned char var_6 = (unsigned char)124;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 7327906845065539169ULL;
unsigned long long int var_11 = 10560421550956910412ULL;
int zero = 0;
short var_13 = (short)3962;
int var_14 = 1782179740;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
