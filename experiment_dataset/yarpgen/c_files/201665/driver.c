#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1636736659;
unsigned char var_6 = (unsigned char)52;
int var_8 = 735864356;
signed char var_10 = (signed char)-109;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-26;
unsigned char var_14 = (unsigned char)130;
unsigned short var_15 = (unsigned short)40474;
int zero = 0;
unsigned char var_16 = (unsigned char)188;
unsigned char var_17 = (unsigned char)75;
short var_18 = (short)-27354;
long long int var_19 = 4510212371263360149LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
