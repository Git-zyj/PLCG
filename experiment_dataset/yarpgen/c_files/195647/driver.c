#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2837555179543373670LL;
short var_5 = (short)-14138;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)88;
unsigned long long int var_9 = 11093613087136813057ULL;
int zero = 0;
short var_10 = (short)22457;
unsigned char var_11 = (unsigned char)176;
signed char var_12 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
