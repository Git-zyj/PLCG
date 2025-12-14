#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_13 = (unsigned short)31913;
int var_15 = -1997023668;
short var_17 = (short)-3112;
int zero = 0;
int var_19 = -1381951624;
int var_20 = 1132617499;
unsigned long long int var_21 = 9236595248663515173ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
