#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3903496719107766243LL;
signed char var_7 = (signed char)-104;
unsigned long long int var_9 = 15413284413574174461ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)151;
int zero = 0;
unsigned int var_16 = 2463400320U;
int var_17 = 92610147;
unsigned long long int var_18 = 16625690154265781187ULL;
unsigned char var_19 = (unsigned char)47;
short var_20 = (short)1844;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
