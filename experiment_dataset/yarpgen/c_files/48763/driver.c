#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
int var_2 = -1385104221;
unsigned short var_8 = (unsigned short)13765;
short var_9 = (short)-21273;
int zero = 0;
long long int var_10 = -2564686264147815103LL;
long long int var_11 = -1145263675126064964LL;
unsigned char var_12 = (unsigned char)23;
short var_13 = (short)-3888;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
