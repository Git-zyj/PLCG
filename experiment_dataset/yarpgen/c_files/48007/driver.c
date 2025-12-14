#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 985024403U;
long long int var_1 = -8956591620378031220LL;
signed char var_2 = (signed char)-125;
signed char var_8 = (signed char)-28;
long long int var_13 = 6550557009303070516LL;
long long int var_15 = -200682071565423183LL;
short var_16 = (short)-1275;
unsigned char var_17 = (unsigned char)106;
unsigned short var_18 = (unsigned short)51488;
int zero = 0;
unsigned long long int var_19 = 15675778615520209332ULL;
short var_20 = (short)29777;
short var_21 = (short)-18370;
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
