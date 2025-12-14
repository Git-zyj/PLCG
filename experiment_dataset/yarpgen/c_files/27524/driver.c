#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41758;
signed char var_9 = (signed char)85;
unsigned long long int var_13 = 1812160790820862995ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)144;
short var_17 = (short)25961;
int zero = 0;
int var_19 = 1033237272;
unsigned char var_20 = (unsigned char)82;
signed char var_21 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
