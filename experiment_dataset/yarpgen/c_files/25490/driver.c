#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3460250008U;
_Bool var_5 = (_Bool)0;
signed char var_13 = (signed char)-59;
unsigned short var_16 = (unsigned short)32308;
unsigned long long int var_19 = 9755582927904602741ULL;
int zero = 0;
unsigned int var_20 = 3602393795U;
unsigned char var_21 = (unsigned char)22;
short var_22 = (short)2375;
signed char var_23 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
