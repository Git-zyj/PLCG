#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 10894900276277377585ULL;
short var_11 = (short)5186;
long long int var_13 = 1751785396189688856LL;
unsigned char var_14 = (unsigned char)70;
int zero = 0;
unsigned long long int var_18 = 17376821071493066872ULL;
long long int var_19 = -5900173728343385609LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
