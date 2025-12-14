#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1016044905953259517LL;
unsigned char var_2 = (unsigned char)132;
unsigned char var_4 = (unsigned char)106;
signed char var_6 = (signed char)31;
signed char var_9 = (signed char)124;
unsigned int var_10 = 2647077015U;
int zero = 0;
unsigned int var_11 = 2188013831U;
signed char var_12 = (signed char)73;
short var_13 = (short)-563;
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
