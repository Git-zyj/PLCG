#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-11495;
unsigned short var_5 = (unsigned short)49720;
unsigned short var_8 = (unsigned short)417;
int var_9 = 1772412280;
int zero = 0;
short var_10 = (short)-29402;
long long int var_11 = -8782414013186317513LL;
signed char var_12 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
