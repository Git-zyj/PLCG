#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8704;
unsigned int var_2 = 2249099076U;
unsigned char var_3 = (unsigned char)195;
unsigned long long int var_5 = 14901597326336018419ULL;
unsigned short var_8 = (unsigned short)28630;
int var_9 = 799924152;
unsigned short var_13 = (unsigned short)39589;
int var_15 = -1587210605;
int zero = 0;
long long int var_16 = 6251479552620386583LL;
unsigned char var_17 = (unsigned char)8;
signed char var_18 = (signed char)-84;
long long int var_19 = -4280813484754484329LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
