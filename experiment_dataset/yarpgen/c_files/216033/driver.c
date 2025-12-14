#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 507315555;
int var_1 = 1309339890;
unsigned int var_5 = 37219120U;
unsigned char var_6 = (unsigned char)189;
unsigned long long int var_7 = 15201848605101939421ULL;
unsigned short var_8 = (unsigned short)19943;
unsigned int var_10 = 1144935607U;
unsigned short var_12 = (unsigned short)62325;
int var_15 = -618706277;
unsigned short var_16 = (unsigned short)2049;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
