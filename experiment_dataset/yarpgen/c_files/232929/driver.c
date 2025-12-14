#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
unsigned long long int var_2 = 17682106989367911658ULL;
int var_3 = 1912893561;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)28;
unsigned short var_7 = (unsigned short)31863;
int var_8 = -428962142;
unsigned long long int var_9 = 5445628522683504645ULL;
_Bool var_11 = (_Bool)1;
int var_12 = 947399919;
int zero = 0;
unsigned short var_13 = (unsigned short)64018;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
