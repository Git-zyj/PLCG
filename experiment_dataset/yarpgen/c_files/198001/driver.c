#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12364;
signed char var_4 = (signed char)-5;
unsigned short var_5 = (unsigned short)20459;
_Bool var_7 = (_Bool)0;
int var_9 = -2128817640;
unsigned short var_11 = (unsigned short)29841;
unsigned short var_13 = (unsigned short)41889;
int zero = 0;
short var_15 = (short)28529;
unsigned long long int var_16 = 14148590466098666972ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
