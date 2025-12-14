#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17975187405527708671ULL;
unsigned char var_5 = (unsigned char)35;
long long int var_7 = -7932722186416302359LL;
unsigned char var_8 = (unsigned char)249;
signed char var_12 = (signed char)-49;
int zero = 0;
int var_14 = -1762615208;
unsigned short var_15 = (unsigned short)14773;
unsigned int var_16 = 1878374141U;
unsigned int var_17 = 3217454301U;
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
