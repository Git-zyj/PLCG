#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
unsigned short var_1 = (unsigned short)27335;
unsigned short var_3 = (unsigned short)5802;
long long int var_4 = 1149847666105882240LL;
unsigned short var_8 = (unsigned short)25658;
int var_11 = -115911191;
unsigned char var_12 = (unsigned char)78;
unsigned short var_14 = (unsigned short)54402;
unsigned int var_15 = 3110328411U;
int var_18 = 1643437512;
int zero = 0;
signed char var_19 = (signed char)-99;
int var_20 = -727681298;
signed char var_21 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
