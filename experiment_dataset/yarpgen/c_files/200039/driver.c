#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)147;
unsigned long long int var_8 = 7012780601721359788ULL;
short var_9 = (short)17008;
int zero = 0;
unsigned long long int var_11 = 10647500550447619905ULL;
unsigned char var_12 = (unsigned char)205;
unsigned short var_13 = (unsigned short)43888;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
