#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1625089716U;
signed char var_5 = (signed char)126;
signed char var_6 = (signed char)-82;
signed char var_8 = (signed char)-76;
int var_9 = -1590819632;
signed char var_15 = (signed char)102;
unsigned char var_16 = (unsigned char)1;
unsigned long long int var_17 = 15893668248344356112ULL;
unsigned char var_18 = (unsigned char)247;
int zero = 0;
unsigned long long int var_19 = 11104391656225347113ULL;
signed char var_20 = (signed char)-126;
short var_21 = (short)-15282;
short var_22 = (short)3122;
void init() {
}

void checksum() {
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
