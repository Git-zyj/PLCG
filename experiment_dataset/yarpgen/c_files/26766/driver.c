#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27994;
unsigned long long int var_12 = 7136004685253196377ULL;
unsigned short var_16 = (unsigned short)53049;
signed char var_17 = (signed char)77;
int zero = 0;
short var_20 = (short)7737;
unsigned short var_21 = (unsigned short)15514;
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
