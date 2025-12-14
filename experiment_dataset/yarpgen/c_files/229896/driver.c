#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_9 = 8260132704360601874LL;
signed char var_10 = (signed char)3;
unsigned short var_13 = (unsigned short)51665;
signed char var_14 = (signed char)-23;
int zero = 0;
int var_17 = -1653086480;
int var_18 = -312166910;
unsigned int var_19 = 331368947U;
short var_20 = (short)18773;
unsigned char var_21 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
