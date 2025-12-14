#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1287979537U;
long long int var_7 = -8938690939397563895LL;
unsigned int var_15 = 1360869820U;
unsigned char var_16 = (unsigned char)241;
unsigned char var_18 = (unsigned char)16;
int zero = 0;
int var_20 = -740660785;
long long int var_21 = 6481093193214723228LL;
int var_22 = -722565576;
long long int var_23 = 715486393957339571LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
