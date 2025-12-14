#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8144;
long long int var_5 = 6502473551140351700LL;
unsigned int var_8 = 1834072284U;
unsigned long long int var_9 = 6540172950572560522ULL;
signed char var_11 = (signed char)22;
unsigned long long int var_12 = 10522439211802820417ULL;
unsigned char var_13 = (unsigned char)74;
short var_15 = (short)4305;
int zero = 0;
short var_18 = (short)-19518;
signed char var_19 = (signed char)-40;
unsigned char var_20 = (unsigned char)177;
void init() {
}

void checksum() {
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
