#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1739947960;
int var_2 = -1363873255;
int var_3 = -651805664;
unsigned char var_5 = (unsigned char)23;
unsigned long long int var_6 = 7424638959946648792ULL;
unsigned char var_7 = (unsigned char)173;
long long int var_8 = 8491162007966368913LL;
int var_9 = 1236141073;
int zero = 0;
long long int var_10 = -5413005811820603753LL;
signed char var_11 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
