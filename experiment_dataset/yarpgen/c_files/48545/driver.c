#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7250;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 10099851426011668252ULL;
long long int var_9 = 3859923087829625661LL;
long long int var_10 = -464845396222048136LL;
signed char var_13 = (signed char)38;
unsigned long long int var_15 = 12767892806791745077ULL;
int zero = 0;
short var_16 = (short)-10347;
unsigned short var_17 = (unsigned short)26818;
signed char var_18 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
