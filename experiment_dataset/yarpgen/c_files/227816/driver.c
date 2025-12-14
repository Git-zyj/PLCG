#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1711430997U;
long long int var_2 = 7265323118417868002LL;
int var_6 = 1898222637;
long long int var_7 = -2092863030895347665LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 2691505117751771584ULL;
long long int var_12 = 2185173401965021247LL;
int zero = 0;
unsigned long long int var_13 = 3651718855716796445ULL;
short var_14 = (short)-1518;
unsigned long long int var_15 = 2649279527150489575ULL;
unsigned int var_16 = 1776914153U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
