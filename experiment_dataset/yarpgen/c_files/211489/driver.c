#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25995;
int var_1 = 218948390;
unsigned int var_3 = 228010778U;
unsigned char var_4 = (unsigned char)129;
short var_5 = (short)-8105;
long long int var_6 = 1843951275660060859LL;
unsigned int var_9 = 4232467863U;
int zero = 0;
int var_12 = -1971880;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)0;
void init() {
}

void checksum() {
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
