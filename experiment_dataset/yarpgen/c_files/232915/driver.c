#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)206;
long long int var_4 = 8001547477436055459LL;
short var_7 = (short)27293;
unsigned int var_9 = 3484140329U;
int zero = 0;
unsigned int var_11 = 3183278292U;
unsigned long long int var_12 = 9535829589255066856ULL;
void init() {
}

void checksum() {
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
