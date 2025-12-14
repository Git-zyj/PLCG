#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2151;
long long int var_9 = -750575869644076711LL;
unsigned char var_14 = (unsigned char)26;
long long int var_15 = -3307040574951924413LL;
short var_17 = (short)-21407;
int zero = 0;
short var_18 = (short)20909;
short var_19 = (short)6645;
short var_20 = (short)7877;
void init() {
}

void checksum() {
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
