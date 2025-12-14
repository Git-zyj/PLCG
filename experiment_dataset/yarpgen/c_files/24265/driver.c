#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64011;
unsigned long long int var_3 = 11595231600166536925ULL;
unsigned short var_4 = (unsigned short)63543;
unsigned long long int var_7 = 9544156141720995267ULL;
int var_8 = -1859395336;
unsigned short var_10 = (unsigned short)59372;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 955666866U;
unsigned long long int var_15 = 13398073185606606328ULL;
long long int var_16 = 740985216222786511LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1815345615U;
unsigned char var_21 = (unsigned char)218;
unsigned char var_22 = (unsigned char)103;
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
