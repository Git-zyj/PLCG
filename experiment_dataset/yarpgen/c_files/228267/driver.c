#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 7831683677251645815LL;
short var_4 = (short)3804;
short var_5 = (short)28533;
unsigned char var_8 = (unsigned char)138;
int zero = 0;
short var_10 = (short)-27527;
short var_11 = (short)-29896;
signed char var_12 = (signed char)-99;
unsigned long long int var_13 = 15641987574017095806ULL;
long long int var_14 = 1078334194575759572LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
