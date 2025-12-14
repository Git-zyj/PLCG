#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)101;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_10 = -1445479480;
signed char var_11 = (signed char)-74;
unsigned char var_12 = (unsigned char)37;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-113;
int var_15 = -901856289;
signed char var_16 = (signed char)32;
void init() {
}

void checksum() {
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
