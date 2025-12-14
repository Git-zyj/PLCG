#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)19262;
unsigned char var_6 = (unsigned char)114;
long long int var_12 = 4747833864475173408LL;
long long int var_13 = -651363840654039537LL;
int zero = 0;
unsigned char var_18 = (unsigned char)11;
short var_19 = (short)11569;
unsigned int var_20 = 1383158933U;
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
