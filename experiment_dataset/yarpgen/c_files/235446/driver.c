#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1044688325U;
int var_1 = -260567343;
unsigned int var_3 = 110671169U;
unsigned char var_5 = (unsigned char)147;
short var_6 = (short)-10009;
int zero = 0;
short var_11 = (short)-3248;
signed char var_12 = (signed char)-121;
void init() {
}

void checksum() {
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
