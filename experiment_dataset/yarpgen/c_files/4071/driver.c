#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6398020862846125752ULL;
unsigned long long int var_1 = 10362619957015872627ULL;
unsigned long long int var_3 = 150283859399514693ULL;
unsigned char var_8 = (unsigned char)108;
int zero = 0;
int var_12 = -1366145667;
unsigned short var_13 = (unsigned short)54610;
unsigned char var_14 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
