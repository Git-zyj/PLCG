#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25780;
int var_2 = 1998347293;
int var_3 = -886907232;
signed char var_4 = (signed char)-66;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-85;
unsigned short var_7 = (unsigned short)10528;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)7408;
unsigned short var_11 = (unsigned short)16409;
unsigned short var_12 = (unsigned short)13867;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
