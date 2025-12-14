#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)190;
int var_6 = 508263002;
unsigned short var_7 = (unsigned short)52712;
unsigned long long int var_8 = 8385891969341760564ULL;
signed char var_9 = (signed char)-53;
unsigned short var_11 = (unsigned short)21965;
short var_12 = (short)-21211;
int zero = 0;
long long int var_13 = -3338509857864503947LL;
long long int var_14 = 5029909898639736769LL;
short var_15 = (short)2501;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
