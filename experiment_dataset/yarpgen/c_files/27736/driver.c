#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -99224799;
unsigned char var_2 = (unsigned char)168;
unsigned char var_3 = (unsigned char)44;
unsigned short var_7 = (unsigned short)64669;
short var_8 = (short)29450;
signed char var_9 = (signed char)53;
unsigned int var_10 = 446263774U;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)43;
unsigned long long int var_14 = 17589249671237416511ULL;
signed char var_15 = (signed char)-26;
int zero = 0;
unsigned short var_18 = (unsigned short)35720;
unsigned int var_19 = 3875178477U;
unsigned char var_20 = (unsigned char)13;
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
