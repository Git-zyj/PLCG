#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)86;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 291313568U;
short var_8 = (short)18375;
signed char var_9 = (signed char)13;
unsigned char var_10 = (unsigned char)180;
short var_11 = (short)19836;
signed char var_12 = (signed char)108;
long long int var_13 = -51408571564838712LL;
int zero = 0;
long long int var_15 = -8342676880174429124LL;
long long int var_16 = 4627540495120292471LL;
void init() {
}

void checksum() {
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
