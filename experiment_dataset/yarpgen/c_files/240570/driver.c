#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15808;
unsigned short var_3 = (unsigned short)12147;
signed char var_7 = (signed char)-41;
unsigned int var_9 = 1286645997U;
unsigned short var_13 = (unsigned short)4085;
unsigned long long int var_17 = 10942844231589433385ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)18500;
signed char var_20 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
