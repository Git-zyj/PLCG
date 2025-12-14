#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_6 = -7953341356681316073LL;
unsigned short var_11 = (unsigned short)1820;
long long int var_12 = -2580787667383582396LL;
signed char var_14 = (signed char)-64;
_Bool var_15 = (_Bool)0;
int var_17 = -1861957621;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-100;
int zero = 0;
int var_20 = 1805195182;
unsigned short var_21 = (unsigned short)19524;
void init() {
}

void checksum() {
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
