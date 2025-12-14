#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16142121019248131792ULL;
unsigned char var_4 = (unsigned char)183;
unsigned long long int var_7 = 3456088785127414494ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = 743010208838191145LL;
unsigned long long int var_12 = 11385492249871831112ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
