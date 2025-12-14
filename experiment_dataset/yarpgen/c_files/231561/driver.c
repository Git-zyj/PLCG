#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 907020280410165816ULL;
unsigned char var_3 = (unsigned char)155;
short var_8 = (short)-17700;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)52;
unsigned long long int var_19 = 2402911700634997199ULL;
int zero = 0;
long long int var_20 = 3004146317668834321LL;
unsigned int var_21 = 1334837473U;
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
