#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9036902677433645323LL;
unsigned int var_12 = 1253611650U;
unsigned char var_13 = (unsigned char)94;
int zero = 0;
signed char var_17 = (signed char)-26;
_Bool var_18 = (_Bool)1;
long long int var_19 = -1835760282626277610LL;
unsigned int var_20 = 3815025157U;
_Bool var_21 = (_Bool)0;
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
