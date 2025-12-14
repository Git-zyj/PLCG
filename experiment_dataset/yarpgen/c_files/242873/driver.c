#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2003674562;
long long int var_6 = 9020818724973267550LL;
int var_7 = -303089688;
unsigned long long int var_9 = 763470820784769791ULL;
unsigned long long int var_11 = 523584861353973706ULL;
short var_12 = (short)-18837;
signed char var_13 = (signed char)55;
int var_16 = 261788195;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3807471U;
unsigned char var_19 = (unsigned char)204;
void init() {
}

void checksum() {
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
