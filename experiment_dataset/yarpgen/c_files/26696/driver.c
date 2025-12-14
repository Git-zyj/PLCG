#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4043977273U;
unsigned short var_1 = (unsigned short)55624;
signed char var_3 = (signed char)-126;
unsigned char var_5 = (unsigned char)207;
int var_6 = -397786759;
unsigned long long int var_7 = 5312320440979601879ULL;
long long int var_8 = 3237853644925451723LL;
int var_9 = -1789003900;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2100798108U;
int var_14 = 473810006;
_Bool var_15 = (_Bool)0;
int var_16 = 224482606;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
