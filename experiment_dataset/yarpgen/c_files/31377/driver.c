#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2592979174608212349ULL;
int var_4 = -1866674218;
signed char var_6 = (signed char)-88;
unsigned long long int var_12 = 11691209245821033741ULL;
unsigned short var_13 = (unsigned short)59628;
int zero = 0;
int var_14 = -1443362968;
signed char var_15 = (signed char)72;
unsigned char var_16 = (unsigned char)20;
short var_17 = (short)1207;
unsigned long long int var_18 = 4301822408142182359ULL;
signed char var_19 = (signed char)-112;
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
