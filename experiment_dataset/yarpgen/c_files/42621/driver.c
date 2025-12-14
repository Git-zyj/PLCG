#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3476732445545066853ULL;
long long int var_1 = -4537970381900675877LL;
unsigned char var_2 = (unsigned char)213;
long long int var_3 = 3549412127259405282LL;
unsigned char var_4 = (unsigned char)103;
unsigned short var_5 = (unsigned short)25915;
unsigned short var_6 = (unsigned short)19625;
unsigned char var_7 = (unsigned char)32;
long long int var_8 = 6170064384054454424LL;
unsigned int var_9 = 739789244U;
unsigned int var_10 = 3687869487U;
unsigned int var_11 = 3463404150U;
unsigned int var_12 = 2254105688U;
unsigned char var_13 = (unsigned char)214;
short var_14 = (short)-10428;
int var_15 = -259015005;
int zero = 0;
signed char var_16 = (signed char)-27;
unsigned long long int var_17 = 440351852037470926ULL;
int var_18 = -1201415661;
unsigned char var_19 = (unsigned char)245;
void init() {
}

void checksum() {
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
