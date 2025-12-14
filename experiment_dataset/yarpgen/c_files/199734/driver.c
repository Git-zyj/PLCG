#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
unsigned long long int var_2 = 18352176040901770071ULL;
short var_7 = (short)-23226;
short var_18 = (short)1502;
int zero = 0;
unsigned int var_19 = 3499904252U;
signed char var_20 = (signed char)-70;
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
