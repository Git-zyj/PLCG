#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -714813587;
int var_4 = -1647545016;
int var_5 = -1540370770;
int var_9 = 89790351;
int var_10 = -703232597;
int var_12 = -528479375;
int var_13 = 1419610246;
int zero = 0;
int var_16 = -1750000788;
int var_17 = -512111499;
int var_18 = 1462662823;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
