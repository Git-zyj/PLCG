#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 109144753;
unsigned char var_4 = (unsigned char)198;
long long int var_5 = 7958501042889497952LL;
signed char var_6 = (signed char)-10;
long long int var_8 = 8451869075572991877LL;
short var_9 = (short)20775;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)26;
unsigned int var_14 = 1611132693U;
long long int var_16 = 7992766301232606090LL;
int zero = 0;
signed char var_17 = (signed char)-7;
long long int var_18 = -6191909994308050902LL;
_Bool var_19 = (_Bool)0;
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
