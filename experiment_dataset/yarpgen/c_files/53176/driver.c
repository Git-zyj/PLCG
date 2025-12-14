#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17205;
unsigned int var_2 = 2511541479U;
int var_3 = -512446096;
unsigned char var_4 = (unsigned char)252;
unsigned long long int var_5 = 4146294354464292151ULL;
unsigned int var_6 = 191163023U;
signed char var_7 = (signed char)-90;
unsigned char var_8 = (unsigned char)231;
unsigned int var_9 = 935951131U;
short var_11 = (short)16671;
unsigned long long int var_12 = 499855768746446107ULL;
unsigned int var_13 = 73279410U;
int zero = 0;
unsigned short var_14 = (unsigned short)49772;
short var_15 = (short)-6474;
unsigned char var_16 = (unsigned char)120;
short var_17 = (short)-15155;
unsigned int var_18 = 2866281996U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
