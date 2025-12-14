#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4852;
unsigned char var_8 = (unsigned char)175;
unsigned int var_11 = 1129163375U;
short var_12 = (short)29643;
long long int var_16 = -474240544188477934LL;
unsigned char var_18 = (unsigned char)226;
int zero = 0;
int var_19 = 657873606;
unsigned int var_20 = 1175276492U;
unsigned long long int var_21 = 4023529663507864243ULL;
_Bool var_22 = (_Bool)1;
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
