#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16761250623497878817ULL;
int var_3 = 416962382;
unsigned short var_4 = (unsigned short)33791;
unsigned short var_8 = (unsigned short)59945;
int var_9 = -660340960;
int var_12 = -658912232;
int var_14 = 557322572;
int var_16 = 307124635;
unsigned long long int var_17 = 12440750656618372589ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)7908;
unsigned long long int var_19 = 18307709750290750119ULL;
unsigned long long int var_20 = 9073405922150967141ULL;
unsigned short var_21 = (unsigned short)23670;
unsigned short var_22 = (unsigned short)52286;
unsigned short var_23 = (unsigned short)8560;
unsigned long long int var_24 = 11130257284567578291ULL;
unsigned long long int var_25 = 15362463443145336189ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
