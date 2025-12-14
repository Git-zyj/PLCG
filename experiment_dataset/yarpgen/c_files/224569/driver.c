#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6061904256514766677ULL;
unsigned char var_3 = (unsigned char)37;
unsigned short var_4 = (unsigned short)3891;
signed char var_7 = (signed char)-95;
signed char var_9 = (signed char)-65;
unsigned short var_10 = (unsigned short)59077;
int var_11 = 878619906;
unsigned int var_12 = 2196335117U;
signed char var_13 = (signed char)106;
unsigned short var_14 = (unsigned short)42548;
int zero = 0;
int var_15 = -1631678038;
int var_16 = 823358350;
unsigned short var_17 = (unsigned short)54210;
unsigned char var_18 = (unsigned char)11;
unsigned long long int var_19 = 2102212468220547800ULL;
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
