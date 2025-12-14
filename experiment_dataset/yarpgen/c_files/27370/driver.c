#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21331;
short var_2 = (short)-5196;
unsigned short var_4 = (unsigned short)60860;
signed char var_5 = (signed char)-16;
unsigned short var_6 = (unsigned short)60526;
unsigned int var_8 = 3136919095U;
int var_9 = 780205372;
unsigned char var_10 = (unsigned char)150;
long long int var_11 = 7079121333553513409LL;
long long int var_16 = 7216048465240369142LL;
int zero = 0;
unsigned char var_19 = (unsigned char)192;
unsigned int var_20 = 3471149727U;
unsigned char var_21 = (unsigned char)218;
unsigned int var_22 = 1601545234U;
int var_23 = -182596819;
void init() {
}

void checksum() {
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
