#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8373314456512520002LL;
int var_2 = 960084573;
int var_4 = -736612985;
unsigned int var_7 = 1867799725U;
unsigned char var_12 = (unsigned char)164;
_Bool var_13 = (_Bool)1;
int var_14 = -1958305129;
int var_16 = 1341688359;
unsigned char var_18 = (unsigned char)79;
int zero = 0;
signed char var_19 = (signed char)123;
unsigned short var_20 = (unsigned short)34872;
unsigned char var_21 = (unsigned char)252;
long long int var_22 = 7263635686987260770LL;
int var_23 = -952614955;
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
