#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11540;
unsigned long long int var_4 = 6061495839186616301ULL;
signed char var_5 = (signed char)111;
unsigned char var_8 = (unsigned char)106;
int var_11 = -2076189122;
int zero = 0;
unsigned int var_12 = 2213561889U;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
