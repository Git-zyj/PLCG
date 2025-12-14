#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16497;
unsigned char var_5 = (unsigned char)87;
unsigned char var_8 = (unsigned char)208;
int var_10 = 1288256962;
unsigned char var_11 = (unsigned char)172;
int zero = 0;
long long int var_12 = -5174221730734811519LL;
unsigned char var_13 = (unsigned char)167;
unsigned char var_14 = (unsigned char)22;
int var_15 = -809818504;
long long int var_16 = 846504010548853096LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
