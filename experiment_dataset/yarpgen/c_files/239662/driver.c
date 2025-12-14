#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -587575314;
_Bool var_2 = (_Bool)1;
int var_4 = -2068901502;
signed char var_11 = (signed char)-112;
int var_12 = -244067658;
unsigned int var_13 = 3197702202U;
int var_14 = -324135411;
int var_15 = -1700369781;
unsigned short var_17 = (unsigned short)37699;
int zero = 0;
signed char var_20 = (signed char)-65;
unsigned int var_21 = 1158913100U;
void init() {
}

void checksum() {
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
