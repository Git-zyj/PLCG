#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1391516172329362435LL;
signed char var_10 = (signed char)15;
signed char var_12 = (signed char)-6;
unsigned short var_14 = (unsigned short)62633;
int var_15 = -1394576107;
int zero = 0;
int var_20 = 253267583;
short var_21 = (short)-6643;
signed char var_22 = (signed char)40;
signed char var_23 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
