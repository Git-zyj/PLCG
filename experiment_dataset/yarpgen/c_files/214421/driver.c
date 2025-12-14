#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15058603774551706967ULL;
unsigned int var_5 = 1924691606U;
unsigned char var_8 = (unsigned char)178;
unsigned short var_9 = (unsigned short)9536;
int zero = 0;
int var_11 = 2042299310;
unsigned short var_12 = (unsigned short)63375;
unsigned long long int var_13 = 14702518863043411172ULL;
unsigned long long int var_14 = 14941313916694060649ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
