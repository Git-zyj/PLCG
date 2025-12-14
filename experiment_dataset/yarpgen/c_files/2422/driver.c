#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5047438834144647906LL;
short var_9 = (short)31521;
unsigned int var_11 = 302809954U;
unsigned long long int var_13 = 13858406989721767696ULL;
signed char var_16 = (signed char)-70;
int zero = 0;
signed char var_18 = (signed char)48;
unsigned int var_19 = 2839218371U;
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
