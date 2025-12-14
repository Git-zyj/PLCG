#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 911763433;
unsigned char var_6 = (unsigned char)121;
unsigned char var_8 = (unsigned char)48;
signed char var_9 = (signed char)41;
unsigned char var_10 = (unsigned char)229;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 750947325U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
