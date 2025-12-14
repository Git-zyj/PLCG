#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
short var_7 = (short)-161;
_Bool var_10 = (_Bool)0;
int var_12 = -1543362995;
int zero = 0;
unsigned char var_13 = (unsigned char)46;
unsigned char var_14 = (unsigned char)209;
unsigned short var_15 = (unsigned short)27655;
unsigned short var_16 = (unsigned short)41418;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
