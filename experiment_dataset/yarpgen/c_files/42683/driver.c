#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-12627;
unsigned short var_12 = (unsigned short)49694;
long long int var_16 = -5135964861722549170LL;
signed char var_19 = (signed char)110;
int zero = 0;
long long int var_20 = 5115601143125434905LL;
short var_21 = (short)-9823;
unsigned char var_22 = (unsigned char)13;
signed char var_23 = (signed char)23;
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
