#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7234565309964648760ULL;
short var_3 = (short)21572;
unsigned short var_5 = (unsigned short)12496;
unsigned long long int var_6 = 8817826984501932238ULL;
int zero = 0;
unsigned int var_17 = 138948348U;
short var_18 = (short)1903;
unsigned short var_19 = (unsigned short)50316;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
