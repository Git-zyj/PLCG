#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1169918504U;
unsigned char var_2 = (unsigned char)60;
long long int var_3 = -7683734518431855547LL;
unsigned short var_10 = (unsigned short)25047;
unsigned int var_12 = 3660262323U;
int var_14 = -943230605;
signed char var_15 = (signed char)124;
unsigned int var_18 = 1410689768U;
int zero = 0;
signed char var_20 = (signed char)-25;
signed char var_21 = (signed char)6;
unsigned char var_22 = (unsigned char)46;
void init() {
}

void checksum() {
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
