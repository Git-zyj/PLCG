#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_9 = (signed char)-68;
long long int var_10 = -4065024520403513359LL;
unsigned int var_11 = 346230182U;
int zero = 0;
unsigned char var_19 = (unsigned char)232;
unsigned char var_20 = (unsigned char)194;
short var_21 = (short)17721;
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
