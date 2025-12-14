#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13192349766582487075ULL;
signed char var_5 = (signed char)-3;
unsigned int var_6 = 2718468883U;
unsigned char var_8 = (unsigned char)66;
signed char var_9 = (signed char)-29;
unsigned int var_10 = 773919951U;
unsigned int var_11 = 257683532U;
unsigned short var_13 = (unsigned short)13329;
int var_14 = -977720225;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-51;
unsigned char var_17 = (unsigned char)109;
unsigned long long int var_18 = 14302786003965108879ULL;
unsigned long long int var_19 = 7154635224750917119ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
