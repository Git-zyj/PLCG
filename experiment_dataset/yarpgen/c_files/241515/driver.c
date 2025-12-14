#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1169854921;
int var_4 = 1786096184;
short var_6 = (short)-4363;
unsigned char var_9 = (unsigned char)244;
signed char var_10 = (signed char)-59;
unsigned long long int var_12 = 10062141210931043865ULL;
int zero = 0;
signed char var_14 = (signed char)34;
short var_15 = (short)787;
unsigned long long int var_16 = 8490959842118608373ULL;
unsigned char var_17 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
