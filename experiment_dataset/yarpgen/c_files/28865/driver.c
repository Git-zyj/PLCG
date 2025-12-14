#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
long long int var_2 = 5330069000060853779LL;
unsigned long long int var_6 = 18178590066279279990ULL;
_Bool var_12 = (_Bool)0;
long long int var_16 = -2760996266398717441LL;
int zero = 0;
unsigned char var_17 = (unsigned char)98;
short var_18 = (short)16519;
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
