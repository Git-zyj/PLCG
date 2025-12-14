#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 53457620U;
unsigned char var_1 = (unsigned char)145;
_Bool var_3 = (_Bool)0;
short var_6 = (short)-26387;
signed char var_7 = (signed char)75;
unsigned int var_9 = 79190384U;
long long int var_18 = 7750194764557860082LL;
int zero = 0;
unsigned long long int var_19 = 13721808742969818482ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
