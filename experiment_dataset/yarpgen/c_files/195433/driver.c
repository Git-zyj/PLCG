#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3219927528384685239LL;
unsigned int var_1 = 287529877U;
unsigned short var_2 = (unsigned short)20716;
unsigned long long int var_3 = 13563823766111076631ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -4297139848999886646LL;
long long int var_6 = -2098847183281084482LL;
long long int var_7 = 5168750326314672545LL;
unsigned short var_10 = (unsigned short)21518;
unsigned int var_14 = 2337999636U;
unsigned long long int var_15 = 10894248670000265879ULL;
signed char var_16 = (signed char)-80;
int zero = 0;
signed char var_18 = (signed char)29;
unsigned short var_19 = (unsigned short)57272;
short var_20 = (short)-2504;
unsigned int var_21 = 1484021793U;
signed char var_22 = (signed char)3;
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
