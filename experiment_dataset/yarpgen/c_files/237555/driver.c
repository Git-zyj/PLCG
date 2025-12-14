#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27061;
signed char var_2 = (signed char)-30;
long long int var_7 = -2848154491174131586LL;
int var_8 = 239591299;
unsigned short var_9 = (unsigned short)14181;
int zero = 0;
unsigned short var_11 = (unsigned short)27476;
unsigned short var_12 = (unsigned short)56307;
signed char var_13 = (signed char)90;
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
