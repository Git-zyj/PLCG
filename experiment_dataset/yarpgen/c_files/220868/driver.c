#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29581;
long long int var_4 = 433824714811461330LL;
short var_7 = (short)-11174;
int var_9 = 842814414;
unsigned char var_11 = (unsigned char)253;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-10031;
_Bool var_14 = (_Bool)1;
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
