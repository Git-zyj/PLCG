#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
signed char var_1 = (signed char)-82;
unsigned short var_3 = (unsigned short)7202;
long long int var_4 = -604519615111372697LL;
unsigned int var_6 = 3301874325U;
unsigned short var_8 = (unsigned short)52830;
short var_9 = (short)2427;
long long int var_10 = 5867670159231549759LL;
long long int var_11 = 3453931647811272870LL;
unsigned long long int var_17 = 6163946586358753736ULL;
int zero = 0;
long long int var_18 = 1105652061822363178LL;
unsigned short var_19 = (unsigned short)6284;
unsigned short var_20 = (unsigned short)15782;
short var_21 = (short)2018;
short var_22 = (short)-15729;
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
