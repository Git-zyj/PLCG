#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
unsigned int var_1 = 2917219741U;
unsigned char var_2 = (unsigned char)65;
signed char var_3 = (signed char)-63;
_Bool var_5 = (_Bool)0;
long long int var_8 = 1622215274969689338LL;
unsigned long long int var_9 = 9055498059013923788ULL;
signed char var_10 = (signed char)107;
int var_13 = 15185486;
unsigned char var_14 = (unsigned char)171;
int zero = 0;
unsigned char var_15 = (unsigned char)121;
unsigned int var_16 = 1920530036U;
unsigned char var_17 = (unsigned char)20;
short var_18 = (short)-4641;
int var_19 = 178877536;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
