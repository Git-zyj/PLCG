#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1079759289757547445LL;
long long int var_3 = 7846946559805304095LL;
long long int var_8 = -6094826809621515634LL;
long long int var_13 = 2207060565043880862LL;
unsigned char var_18 = (unsigned char)23;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)69;
void init() {
}

void checksum() {
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
