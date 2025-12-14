#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1347065516;
long long int var_3 = 3326788720014815375LL;
short var_8 = (short)11026;
unsigned char var_13 = (unsigned char)166;
int zero = 0;
unsigned short var_15 = (unsigned short)31777;
unsigned short var_16 = (unsigned short)38612;
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
