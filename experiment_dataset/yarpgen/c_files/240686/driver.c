#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4091136935U;
unsigned char var_2 = (unsigned char)184;
long long int var_3 = 4191853120734336696LL;
unsigned char var_5 = (unsigned char)46;
unsigned long long int var_7 = 3836613881134760037ULL;
unsigned short var_10 = (unsigned short)19168;
int var_12 = 568541588;
unsigned char var_13 = (unsigned char)120;
short var_14 = (short)-20956;
unsigned char var_15 = (unsigned char)179;
int zero = 0;
int var_17 = -637753047;
_Bool var_18 = (_Bool)1;
long long int var_19 = -5716515900066135676LL;
int var_20 = -1230137541;
void init() {
}

void checksum() {
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
