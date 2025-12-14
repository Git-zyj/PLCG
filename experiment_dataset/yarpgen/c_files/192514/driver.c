#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)197;
unsigned short var_6 = (unsigned short)30573;
_Bool var_9 = (_Bool)0;
unsigned char var_16 = (unsigned char)219;
int zero = 0;
unsigned char var_17 = (unsigned char)96;
int var_18 = 1406475307;
unsigned char var_19 = (unsigned char)165;
unsigned char var_20 = (unsigned char)108;
unsigned char var_21 = (unsigned char)182;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
