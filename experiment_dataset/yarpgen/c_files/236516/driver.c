#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19793;
long long int var_6 = 7140738653225958075LL;
int var_8 = 160304462;
signed char var_11 = (signed char)2;
int var_13 = 703856445;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 9425792408888059437ULL;
int zero = 0;
unsigned long long int var_20 = 7877572673511454116ULL;
_Bool var_21 = (_Bool)0;
int var_22 = 1003285126;
signed char var_23 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
