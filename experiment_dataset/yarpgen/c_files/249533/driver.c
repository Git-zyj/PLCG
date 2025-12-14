#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15020447515710921567ULL;
unsigned char var_2 = (unsigned char)120;
unsigned char var_4 = (unsigned char)90;
signed char var_5 = (signed char)11;
long long int var_6 = -4159548121281446994LL;
signed char var_8 = (signed char)-90;
unsigned short var_9 = (unsigned short)58000;
short var_11 = (short)-23465;
unsigned long long int var_12 = 10208530966109958972ULL;
unsigned char var_17 = (unsigned char)219;
int zero = 0;
unsigned int var_18 = 4058235086U;
short var_19 = (short)-10070;
short var_20 = (short)-8393;
unsigned int var_21 = 984974080U;
short var_22 = (short)26149;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
