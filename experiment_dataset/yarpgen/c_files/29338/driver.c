#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-15996;
unsigned char var_7 = (unsigned char)193;
short var_9 = (short)-21052;
int zero = 0;
unsigned char var_19 = (unsigned char)2;
unsigned short var_20 = (unsigned short)19511;
signed char var_21 = (signed char)-54;
unsigned long long int var_22 = 10026434912549017487ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
