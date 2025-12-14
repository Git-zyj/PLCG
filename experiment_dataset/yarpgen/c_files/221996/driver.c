#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 7933793173209271639ULL;
signed char var_10 = (signed char)69;
unsigned short var_11 = (unsigned short)9272;
unsigned long long int var_12 = 2471074517987711005ULL;
short var_14 = (short)-8638;
unsigned char var_16 = (unsigned char)169;
int zero = 0;
int var_18 = -1000157815;
unsigned int var_19 = 2165059671U;
unsigned char var_20 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
