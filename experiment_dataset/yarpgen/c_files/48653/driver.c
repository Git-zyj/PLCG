#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)4;
signed char var_4 = (signed char)44;
unsigned int var_5 = 1741027778U;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-28;
unsigned char var_9 = (unsigned char)197;
signed char var_12 = (signed char)71;
unsigned long long int var_13 = 5619279447057803087ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)66;
int var_15 = -2092370891;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
