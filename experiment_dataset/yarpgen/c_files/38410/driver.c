#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6881767694217982569LL;
int var_5 = 509597269;
unsigned short var_6 = (unsigned short)61910;
unsigned long long int var_7 = 6634518302354257163ULL;
unsigned char var_8 = (unsigned char)113;
short var_11 = (short)-1130;
int zero = 0;
unsigned int var_12 = 3458188041U;
unsigned int var_13 = 1687793742U;
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
