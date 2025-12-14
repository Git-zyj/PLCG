#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17319956133863174718ULL;
short var_3 = (short)9628;
unsigned long long int var_9 = 17018421403186245658ULL;
unsigned char var_10 = (unsigned char)103;
unsigned short var_11 = (unsigned short)20959;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)20;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 411430237U;
short var_21 = (short)-31350;
void init() {
}

void checksum() {
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
