#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)138;
_Bool var_9 = (_Bool)0;
unsigned int var_13 = 2994668460U;
int zero = 0;
short var_14 = (short)4831;
short var_15 = (short)7722;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)43523;
void init() {
}

void checksum() {
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
