#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
unsigned char var_1 = (unsigned char)208;
signed char var_2 = (signed char)107;
_Bool var_3 = (_Bool)0;
unsigned char var_10 = (unsigned char)130;
int zero = 0;
unsigned long long int var_12 = 15645998074430168227ULL;
long long int var_13 = 5443987608590970824LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
