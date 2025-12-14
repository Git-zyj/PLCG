#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5739;
unsigned int var_2 = 335809675U;
unsigned int var_6 = 3331657804U;
long long int var_7 = 7751294706178923958LL;
long long int var_10 = 5951162851384651930LL;
int zero = 0;
short var_11 = (short)27173;
int var_12 = -1903490035;
unsigned char var_13 = (unsigned char)116;
unsigned char var_14 = (unsigned char)211;
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
