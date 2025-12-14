#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 339672655;
unsigned int var_1 = 1168395845U;
unsigned long long int var_4 = 4202769788699370407ULL;
int var_5 = 1545761648;
unsigned int var_10 = 1370799939U;
signed char var_11 = (signed char)-72;
int zero = 0;
signed char var_13 = (signed char)74;
signed char var_14 = (signed char)-114;
unsigned long long int var_15 = 680544627420252444ULL;
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
