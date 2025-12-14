#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5491739255094307347ULL;
unsigned int var_3 = 455732884U;
unsigned short var_4 = (unsigned short)49579;
int var_5 = 1699538603;
unsigned int var_11 = 221795079U;
unsigned char var_14 = (unsigned char)190;
int zero = 0;
unsigned int var_18 = 4073138656U;
unsigned long long int var_19 = 10235861714449873105ULL;
short var_20 = (short)-24995;
unsigned long long int var_21 = 9629259078406643697ULL;
short var_22 = (short)-6020;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
