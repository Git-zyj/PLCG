#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 727526477U;
short var_3 = (short)-13751;
long long int var_8 = -4231027702547509107LL;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)83;
_Bool var_12 = (_Bool)0;
int var_13 = -498918832;
unsigned int var_14 = 3656412513U;
unsigned short var_15 = (unsigned short)19698;
int zero = 0;
unsigned int var_16 = 1982506552U;
unsigned char var_17 = (unsigned char)116;
signed char var_18 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
