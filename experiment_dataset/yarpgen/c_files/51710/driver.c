#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)89;
unsigned short var_12 = (unsigned short)35641;
long long int var_14 = -953130147019558780LL;
unsigned short var_15 = (unsigned short)48180;
unsigned long long int var_18 = 11613608728307679986ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)121;
unsigned char var_21 = (unsigned char)133;
long long int var_22 = 7878272167695583482LL;
unsigned int var_23 = 2217405693U;
unsigned short var_24 = (unsigned short)35778;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
