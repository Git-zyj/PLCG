#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
unsigned short var_2 = (unsigned short)50039;
short var_5 = (short)757;
unsigned char var_10 = (unsigned char)18;
int zero = 0;
short var_11 = (short)-17189;
signed char var_12 = (signed char)5;
short var_13 = (short)-24341;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
