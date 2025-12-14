#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 55762928U;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 2897835279U;
long long int var_10 = 1550493206976702527LL;
unsigned short var_13 = (unsigned short)56147;
signed char var_15 = (signed char)64;
int zero = 0;
int var_17 = 1085436582;
unsigned char var_18 = (unsigned char)211;
unsigned int var_19 = 59343919U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
