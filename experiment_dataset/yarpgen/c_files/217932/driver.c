#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
unsigned char var_1 = (unsigned char)255;
long long int var_2 = 4207244164326434698LL;
long long int var_8 = 5159812732725435759LL;
short var_9 = (short)25995;
_Bool var_10 = (_Bool)0;
long long int var_13 = 3749307968345182807LL;
int var_15 = -1074863668;
short var_16 = (short)-5186;
int zero = 0;
signed char var_17 = (signed char)57;
signed char var_18 = (signed char)-97;
unsigned long long int var_19 = 457123490538832134ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
