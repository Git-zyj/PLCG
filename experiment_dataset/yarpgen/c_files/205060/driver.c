#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6283;
unsigned long long int var_5 = 11410348018581281640ULL;
signed char var_6 = (signed char)67;
signed char var_8 = (signed char)112;
signed char var_9 = (signed char)122;
signed char var_10 = (signed char)25;
signed char var_12 = (signed char)-19;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-5689;
signed char var_17 = (signed char)-54;
unsigned short var_18 = (unsigned short)45946;
int zero = 0;
long long int var_19 = 3082571012007027923LL;
signed char var_20 = (signed char)-104;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
