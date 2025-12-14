#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20760;
unsigned int var_3 = 1713701953U;
long long int var_9 = 3873745637650169325LL;
signed char var_10 = (signed char)-125;
int zero = 0;
signed char var_12 = (signed char)-56;
unsigned char var_13 = (unsigned char)47;
unsigned char var_14 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
