#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48206;
long long int var_2 = 1962753272133842633LL;
unsigned short var_3 = (unsigned short)53210;
int var_6 = -2081428687;
int var_9 = 1328174727;
short var_12 = (short)2197;
unsigned char var_15 = (unsigned char)38;
unsigned short var_17 = (unsigned short)49706;
int zero = 0;
long long int var_19 = 2017267454575976698LL;
unsigned short var_20 = (unsigned short)10553;
int var_21 = -1782934955;
unsigned int var_22 = 907585049U;
int var_23 = -1406543614;
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
