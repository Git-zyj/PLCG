#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
signed char var_2 = (signed char)-103;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)38378;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)8216;
unsigned short var_9 = (unsigned short)10238;
unsigned char var_11 = (unsigned char)93;
signed char var_14 = (signed char)-66;
unsigned char var_15 = (unsigned char)140;
unsigned long long int var_16 = 840072112965428261ULL;
unsigned int var_18 = 3742521953U;
int zero = 0;
unsigned short var_19 = (unsigned short)2257;
unsigned short var_20 = (unsigned short)13589;
signed char var_21 = (signed char)65;
unsigned int var_22 = 675330544U;
unsigned char var_23 = (unsigned char)169;
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
