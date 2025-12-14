#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6397870715034846029LL;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)108;
unsigned long long int var_9 = 1215205390735674832ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)127;
unsigned char var_11 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
