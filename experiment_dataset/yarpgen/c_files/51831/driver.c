#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2835283083581900845ULL;
unsigned long long int var_3 = 14706893428349809595ULL;
short var_4 = (short)-9016;
unsigned char var_5 = (unsigned char)75;
signed char var_7 = (signed char)98;
int var_9 = -415066254;
long long int var_11 = 4888093179633517391LL;
unsigned char var_12 = (unsigned char)134;
int zero = 0;
unsigned char var_18 = (unsigned char)175;
long long int var_19 = 6119275135777808143LL;
unsigned int var_20 = 3597420487U;
unsigned char var_21 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
