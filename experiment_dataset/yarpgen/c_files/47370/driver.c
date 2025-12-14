#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6546094301274907376LL;
int var_5 = 712778541;
_Bool var_10 = (_Bool)1;
unsigned char var_15 = (unsigned char)221;
long long int var_16 = 7627224169809631828LL;
int zero = 0;
unsigned long long int var_19 = 3349380840566360256ULL;
unsigned short var_20 = (unsigned short)32533;
long long int var_21 = 4057100768971938849LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
