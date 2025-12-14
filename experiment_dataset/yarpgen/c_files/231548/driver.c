#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11920;
unsigned int var_1 = 4001889449U;
unsigned int var_9 = 2988145430U;
unsigned int var_10 = 33074982U;
signed char var_12 = (signed char)-24;
int zero = 0;
unsigned char var_13 = (unsigned char)169;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 10008266729006899980ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
