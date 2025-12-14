#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31357;
unsigned long long int var_6 = 9419598508291688373ULL;
short var_11 = (short)-11181;
short var_13 = (short)14072;
int zero = 0;
unsigned int var_20 = 3938302511U;
short var_21 = (short)-28285;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
