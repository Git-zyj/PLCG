#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
int var_1 = 386977122;
unsigned char var_2 = (unsigned char)72;
long long int var_3 = 928162308216148830LL;
int var_4 = 2001011818;
unsigned int var_5 = 1149826205U;
signed char var_8 = (signed char)19;
long long int var_9 = -7425497125563455258LL;
int zero = 0;
unsigned char var_11 = (unsigned char)94;
unsigned long long int var_12 = 624048379544126504ULL;
signed char var_13 = (signed char)118;
unsigned long long int var_14 = 754956729227912149ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
