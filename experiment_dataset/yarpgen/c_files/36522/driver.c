#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1107326053;
int var_1 = -2045917036;
unsigned short var_6 = (unsigned short)13682;
int var_7 = 983103982;
unsigned char var_8 = (unsigned char)51;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)38769;
int zero = 0;
unsigned short var_11 = (unsigned short)38463;
_Bool var_12 = (_Bool)1;
int var_13 = 1356827976;
unsigned short var_14 = (unsigned short)27059;
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
