#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4631;
long long int var_2 = -7299164291967207719LL;
unsigned int var_3 = 4198086994U;
signed char var_6 = (signed char)60;
unsigned char var_8 = (unsigned char)240;
unsigned long long int var_13 = 10611364319889367576ULL;
unsigned char var_15 = (unsigned char)252;
unsigned long long int var_16 = 16287916997732891199ULL;
int zero = 0;
int var_18 = 1515761268;
long long int var_19 = 3410041761711455720LL;
void init() {
}

void checksum() {
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
