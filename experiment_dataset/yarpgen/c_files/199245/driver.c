#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15478756969218470820ULL;
int zero = 0;
short var_14 = (short)-19882;
long long int var_15 = -3469269398478813642LL;
unsigned char var_16 = (unsigned char)150;
short var_17 = (short)4644;
long long int var_18 = 142591988183572029LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
