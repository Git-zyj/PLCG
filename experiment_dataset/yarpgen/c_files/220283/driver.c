#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 447063222U;
unsigned short var_14 = (unsigned short)60215;
unsigned char var_16 = (unsigned char)70;
unsigned char var_17 = (unsigned char)180;
int zero = 0;
unsigned long long int var_20 = 9372733173455119294ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
