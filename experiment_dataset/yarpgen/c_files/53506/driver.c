#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)174;
unsigned short var_5 = (unsigned short)41097;
short var_6 = (short)29655;
unsigned long long int var_7 = 10502952405936974069ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 14551789682373621774ULL;
int zero = 0;
int var_20 = 379473326;
short var_21 = (short)31354;
void init() {
}

void checksum() {
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
