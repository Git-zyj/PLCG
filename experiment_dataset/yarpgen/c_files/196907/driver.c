#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-553;
signed char var_11 = (signed char)-84;
unsigned short var_12 = (unsigned short)28139;
unsigned char var_18 = (unsigned char)118;
unsigned long long int var_19 = 1915153422880283149ULL;
int zero = 0;
long long int var_20 = 589518103270947690LL;
short var_21 = (short)13045;
unsigned short var_22 = (unsigned short)203;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
