#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5683500828247459857LL;
unsigned int var_1 = 2560783469U;
unsigned short var_6 = (unsigned short)65158;
unsigned short var_8 = (unsigned short)14330;
int var_9 = 1231392279;
int zero = 0;
signed char var_10 = (signed char)80;
long long int var_11 = 6811190724292016912LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
