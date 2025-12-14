#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)8;
int var_5 = -1447471104;
unsigned char var_17 = (unsigned char)142;
int var_18 = 166993997;
int zero = 0;
signed char var_19 = (signed char)2;
unsigned char var_20 = (unsigned char)90;
short var_21 = (short)6543;
unsigned long long int var_22 = 11581366502728524081ULL;
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
