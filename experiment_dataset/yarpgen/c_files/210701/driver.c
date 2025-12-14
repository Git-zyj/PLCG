#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2605541103U;
unsigned int var_1 = 4011285823U;
unsigned long long int var_2 = 12234011009440956698ULL;
unsigned char var_3 = (unsigned char)129;
unsigned int var_6 = 2966938871U;
unsigned long long int var_9 = 15752323556486904712ULL;
unsigned long long int var_14 = 10218550661789523164ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)12375;
unsigned long long int var_18 = 9669850881626969734ULL;
unsigned char var_19 = (unsigned char)223;
unsigned short var_20 = (unsigned short)37083;
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
