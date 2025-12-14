#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7114;
int var_9 = 378293057;
unsigned int var_11 = 278338348U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2825564692U;
unsigned short var_14 = (unsigned short)57895;
unsigned short var_15 = (unsigned short)54508;
int var_16 = 262572264;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
