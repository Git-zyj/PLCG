#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
unsigned short var_4 = (unsigned short)41417;
unsigned long long int var_5 = 7694461331395736144ULL;
unsigned long long int var_6 = 10271652218302554277ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 171151866U;
int zero = 0;
unsigned short var_10 = (unsigned short)27344;
unsigned int var_11 = 2602821861U;
int var_12 = 1149512966;
unsigned short var_13 = (unsigned short)21765;
long long int var_14 = 4284664575079867484LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
