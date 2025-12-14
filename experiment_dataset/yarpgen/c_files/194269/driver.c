#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7968835172697385640LL;
unsigned int var_3 = 146154546U;
unsigned int var_4 = 2320583578U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 1273715224461019793ULL;
long long int var_10 = -3456907329249403548LL;
int zero = 0;
unsigned int var_11 = 2107996889U;
unsigned char var_12 = (unsigned char)37;
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
