#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3990195906U;
unsigned char var_5 = (unsigned char)253;
unsigned int var_6 = 3160690499U;
int var_8 = 416140054;
unsigned char var_9 = (unsigned char)22;
signed char var_10 = (signed char)-46;
unsigned short var_11 = (unsigned short)20780;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-1358;
int zero = 0;
unsigned long long int var_14 = 8868775513012273722ULL;
unsigned short var_15 = (unsigned short)25873;
unsigned char var_16 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
