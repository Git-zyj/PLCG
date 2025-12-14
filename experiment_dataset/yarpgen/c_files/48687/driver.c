#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
unsigned int var_1 = 2251569033U;
short var_2 = (short)-20588;
signed char var_5 = (signed char)-109;
short var_9 = (short)15089;
unsigned long long int var_11 = 6978814299203185589ULL;
long long int var_12 = -2453918308922206349LL;
short var_13 = (short)-23766;
int zero = 0;
long long int var_19 = -6882234296234237529LL;
signed char var_20 = (signed char)63;
int var_21 = 249092687;
_Bool var_22 = (_Bool)0;
short var_23 = (short)1412;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
