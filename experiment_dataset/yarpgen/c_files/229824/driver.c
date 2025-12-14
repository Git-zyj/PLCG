#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3420128414263958503ULL;
short var_2 = (short)-24443;
_Bool var_6 = (_Bool)1;
long long int var_7 = 6196520999802105852LL;
unsigned char var_10 = (unsigned char)111;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)4837;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)12898;
unsigned char var_20 = (unsigned char)64;
unsigned long long int var_21 = 3284352251285737077ULL;
int var_22 = 1231591726;
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
