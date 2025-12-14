#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1848571691U;
unsigned short var_1 = (unsigned short)25595;
unsigned int var_2 = 1400925329U;
unsigned short var_3 = (unsigned short)31561;
int var_4 = -914436939;
int var_6 = 183681467;
unsigned int var_7 = 3048362588U;
unsigned char var_8 = (unsigned char)203;
unsigned long long int var_9 = 6344755669417067988ULL;
unsigned char var_10 = (unsigned char)134;
int zero = 0;
int var_11 = -2076732318;
unsigned short var_12 = (unsigned short)28491;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 5673385015709262957ULL;
unsigned long long int var_15 = 11868572630791374393ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
