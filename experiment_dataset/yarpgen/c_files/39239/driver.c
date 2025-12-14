#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)180;
unsigned long long int var_9 = 14069708619761068676ULL;
unsigned int var_12 = 682781176U;
signed char var_14 = (signed char)-87;
int zero = 0;
unsigned char var_15 = (unsigned char)35;
long long int var_16 = -3898379386774669644LL;
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
