#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)221;
long long int var_9 = -6199744251423988333LL;
unsigned int var_10 = 569557281U;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)135;
unsigned char var_16 = (unsigned char)177;
int zero = 0;
unsigned char var_19 = (unsigned char)16;
signed char var_20 = (signed char)58;
unsigned char var_21 = (unsigned char)75;
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
