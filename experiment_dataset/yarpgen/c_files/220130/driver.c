#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1474170447U;
short var_2 = (short)11476;
unsigned int var_7 = 366203048U;
signed char var_11 = (signed char)68;
long long int var_12 = 6737404056235911671LL;
int zero = 0;
int var_13 = 701596009;
unsigned long long int var_14 = 13017379316322894929ULL;
long long int var_15 = -7296978563076779414LL;
int var_16 = 1190070581;
short var_17 = (short)-25639;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
