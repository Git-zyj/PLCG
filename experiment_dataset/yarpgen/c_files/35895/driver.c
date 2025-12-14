#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8645582170253541767LL;
short var_2 = (short)20584;
unsigned int var_4 = 1826144279U;
unsigned short var_5 = (unsigned short)62639;
unsigned long long int var_8 = 463901710841085298ULL;
int var_9 = 1430643856;
int var_10 = 1672634929;
signed char var_11 = (signed char)-90;
unsigned int var_13 = 4236915634U;
int zero = 0;
int var_15 = -517138402;
long long int var_16 = 2187173357622607988LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
