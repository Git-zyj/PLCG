#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)141;
signed char var_5 = (signed char)-98;
signed char var_6 = (signed char)-120;
unsigned char var_9 = (unsigned char)20;
short var_13 = (short)29218;
unsigned char var_15 = (unsigned char)172;
int zero = 0;
unsigned char var_18 = (unsigned char)10;
int var_19 = 326652239;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
