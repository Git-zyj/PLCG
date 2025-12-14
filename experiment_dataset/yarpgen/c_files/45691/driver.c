#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 127752663;
int var_3 = -1136985650;
int var_4 = 1455993484;
int var_6 = 325836508;
int var_9 = 644703523;
int var_10 = 1353822888;
int var_12 = -230835934;
int zero = 0;
int var_15 = 500609617;
int var_16 = 1748354745;
int var_17 = 143167232;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
