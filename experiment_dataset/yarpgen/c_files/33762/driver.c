#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2992146787U;
unsigned long long int var_7 = 14715295078506965498ULL;
unsigned short var_10 = (unsigned short)52322;
unsigned int var_13 = 1841495728U;
unsigned long long int var_16 = 3921692307636052760ULL;
unsigned long long int var_17 = 15004879014271239257ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)25;
unsigned short var_19 = (unsigned short)41313;
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
