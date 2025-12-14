#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16319345486876983685ULL;
unsigned long long int var_2 = 12252431501002879588ULL;
unsigned int var_3 = 440818529U;
unsigned short var_6 = (unsigned short)34512;
int zero = 0;
long long int var_13 = -3455926040930687586LL;
int var_14 = -832194829;
unsigned int var_15 = 1839387161U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
