#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)51919;
unsigned int var_7 = 3667684730U;
unsigned char var_8 = (unsigned char)237;
signed char var_9 = (signed char)-120;
int var_12 = -665374726;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-25091;
void init() {
}

void checksum() {
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
