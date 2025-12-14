#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
unsigned char var_2 = (unsigned char)236;
short var_5 = (short)-4331;
int var_9 = -1546770809;
int var_10 = 2146033829;
short var_12 = (short)27110;
int zero = 0;
signed char var_16 = (signed char)-93;
short var_17 = (short)-31676;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
