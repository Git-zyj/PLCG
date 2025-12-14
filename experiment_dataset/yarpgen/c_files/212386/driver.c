#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10403395875141537467ULL;
unsigned char var_2 = (unsigned char)143;
unsigned char var_3 = (unsigned char)16;
long long int var_4 = -1406152494072090473LL;
long long int var_6 = -4643798371096714841LL;
unsigned char var_8 = (unsigned char)200;
int zero = 0;
short var_12 = (short)12800;
signed char var_13 = (signed char)40;
void init() {
}

void checksum() {
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
