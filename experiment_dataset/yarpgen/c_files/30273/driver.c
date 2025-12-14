#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1657210894;
short var_9 = (short)-20852;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)49;
int zero = 0;
int var_19 = 508229908;
short var_20 = (short)-16443;
unsigned char var_21 = (unsigned char)127;
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
