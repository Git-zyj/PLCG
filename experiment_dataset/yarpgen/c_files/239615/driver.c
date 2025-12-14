#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)125;
unsigned long long int var_6 = 1035321227232026256ULL;
short var_8 = (short)-3729;
long long int var_9 = 4853323209804554656LL;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)1516;
int zero = 0;
unsigned char var_18 = (unsigned char)25;
unsigned short var_19 = (unsigned short)12415;
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
