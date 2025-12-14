#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 625596149U;
signed char var_5 = (signed char)19;
long long int var_9 = 5155606184865344533LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 465700949451789223ULL;
int zero = 0;
unsigned long long int var_13 = 922259832889883428ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
