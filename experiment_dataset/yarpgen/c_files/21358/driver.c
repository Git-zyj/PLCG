#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2271622071U;
long long int var_1 = 5675044676148672083LL;
unsigned long long int var_2 = 12754257565384901885ULL;
unsigned int var_3 = 2712157894U;
unsigned char var_4 = (unsigned char)95;
int var_6 = 203006876;
unsigned long long int var_7 = 7168677568197456261ULL;
signed char var_8 = (signed char)-107;
unsigned long long int var_9 = 10007749078306876589ULL;
int var_11 = -874418665;
unsigned int var_12 = 1131033809U;
signed char var_14 = (signed char)80;
int zero = 0;
unsigned short var_17 = (unsigned short)23433;
unsigned long long int var_18 = 12202131612182252943ULL;
unsigned short var_19 = (unsigned short)37864;
unsigned short var_20 = (unsigned short)48009;
short var_21 = (short)-14445;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
