#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4477;
unsigned short var_3 = (unsigned short)10062;
unsigned short var_6 = (unsigned short)22332;
int zero = 0;
long long int var_12 = 6456708693378539774LL;
short var_13 = (short)7042;
void init() {
}

void checksum() {
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
