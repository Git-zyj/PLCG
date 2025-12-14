#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
signed char var_3 = (signed char)73;
long long int var_4 = 9085122682985379947LL;
unsigned short var_5 = (unsigned short)3093;
long long int var_6 = -7581243448875513105LL;
int var_7 = 803024070;
long long int var_12 = 2348458421815574211LL;
int zero = 0;
unsigned long long int var_13 = 16039159891093876527ULL;
unsigned int var_14 = 3580145036U;
int var_15 = 1209104443;
unsigned int var_16 = 2713404367U;
unsigned int var_17 = 3228796283U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
