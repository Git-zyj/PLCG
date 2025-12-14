#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
signed char var_2 = (signed char)49;
int var_5 = -2010574364;
long long int var_8 = -4666807298909390728LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -4426194775594063090LL;
int var_11 = 581475913;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)49154;
short var_14 = (short)-8816;
unsigned short var_15 = (unsigned short)10075;
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
