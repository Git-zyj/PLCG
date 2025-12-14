#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)226;
unsigned short var_7 = (unsigned short)11057;
unsigned short var_9 = (unsigned short)28920;
int zero = 0;
signed char var_14 = (signed char)-96;
int var_15 = 1480371296;
unsigned long long int var_16 = 4980900738784186925ULL;
unsigned long long int var_17 = 6355651674514329604ULL;
signed char var_18 = (signed char)-122;
signed char var_19 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
