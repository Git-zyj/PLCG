#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3665025882U;
unsigned short var_2 = (unsigned short)43403;
unsigned char var_4 = (unsigned char)56;
int var_5 = 474890929;
unsigned char var_6 = (unsigned char)223;
short var_11 = (short)25106;
unsigned char var_13 = (unsigned char)252;
unsigned int var_15 = 4005556234U;
signed char var_16 = (signed char)-83;
unsigned short var_17 = (unsigned short)49581;
int zero = 0;
unsigned int var_18 = 3269080910U;
long long int var_19 = 919769942029752182LL;
short var_20 = (short)13737;
void init() {
}

void checksum() {
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
