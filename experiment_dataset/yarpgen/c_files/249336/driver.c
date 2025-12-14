#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46591;
signed char var_1 = (signed char)-91;
short var_2 = (short)-20146;
short var_4 = (short)-3239;
long long int var_5 = -8957966180608897209LL;
long long int var_6 = 7072953859474070962LL;
long long int var_7 = 3388469728249653092LL;
unsigned char var_8 = (unsigned char)103;
signed char var_9 = (signed char)25;
unsigned short var_10 = (unsigned short)20867;
unsigned long long int var_11 = 5725176933751334389ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)19533;
unsigned char var_14 = (unsigned char)107;
long long int var_15 = 1452316554890910734LL;
unsigned long long int var_16 = 12580259061728885528ULL;
short var_17 = (short)2531;
unsigned int var_18 = 1463291179U;
unsigned long long int var_19 = 2989041837306866944ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)229;
signed char var_21 = (signed char)-107;
long long int var_22 = 5065479389800999641LL;
unsigned char var_23 = (unsigned char)18;
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
