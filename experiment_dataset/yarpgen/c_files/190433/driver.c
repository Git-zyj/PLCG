#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3008295436892398800ULL;
unsigned char var_7 = (unsigned char)165;
short var_11 = (short)-13272;
unsigned long long int var_12 = 16857223639644853087ULL;
int zero = 0;
signed char var_19 = (signed char)-46;
signed char var_20 = (signed char)28;
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
