#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5416178216964695113ULL;
_Bool var_5 = (_Bool)1;
int var_12 = 1236313155;
unsigned char var_16 = (unsigned char)73;
int zero = 0;
int var_17 = 1469998407;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)41036;
int var_20 = 101999320;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
