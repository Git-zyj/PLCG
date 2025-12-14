#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26793;
unsigned char var_3 = (unsigned char)251;
unsigned char var_9 = (unsigned char)126;
int zero = 0;
unsigned int var_12 = 1155211016U;
long long int var_13 = -3554185858060238413LL;
short var_14 = (short)20640;
signed char var_15 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
