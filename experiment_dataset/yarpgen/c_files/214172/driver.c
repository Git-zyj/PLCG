#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
unsigned int var_2 = 313564445U;
int var_3 = -2053351285;
unsigned int var_4 = 1172935004U;
signed char var_8 = (signed char)101;
long long int var_9 = -1881537135642453146LL;
unsigned int var_11 = 3332007140U;
int zero = 0;
long long int var_13 = 1278663866873320148LL;
long long int var_14 = -3257697656307433737LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2529348561U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
