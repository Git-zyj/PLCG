#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)210;
short var_5 = (short)-9588;
unsigned long long int var_9 = 2792620900315780409ULL;
int zero = 0;
signed char var_12 = (signed char)-14;
unsigned long long int var_13 = 4987298755260032738ULL;
unsigned char var_14 = (unsigned char)101;
unsigned long long int var_15 = 13383549306486320320ULL;
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
