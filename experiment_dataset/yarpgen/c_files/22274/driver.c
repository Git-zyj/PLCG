#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1427485208U;
short var_4 = (short)-23280;
unsigned int var_5 = 1324274152U;
short var_6 = (short)-9963;
short var_7 = (short)2859;
int zero = 0;
short var_10 = (short)-27105;
short var_11 = (short)31649;
unsigned int var_12 = 3605924851U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
