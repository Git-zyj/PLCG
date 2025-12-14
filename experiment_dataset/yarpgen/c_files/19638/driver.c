#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4052513087U;
int var_1 = -1891064242;
short var_2 = (short)-10869;
unsigned short var_3 = (unsigned short)10902;
signed char var_4 = (signed char)120;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)84;
int zero = 0;
long long int var_10 = -6810662215861403564LL;
unsigned int var_11 = 3838904798U;
long long int var_12 = -6522104461445825198LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
