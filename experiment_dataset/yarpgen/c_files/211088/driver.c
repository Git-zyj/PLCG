#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
int var_2 = 1608078149;
unsigned char var_3 = (unsigned char)110;
signed char var_10 = (signed char)-89;
int zero = 0;
unsigned int var_11 = 1512195642U;
long long int var_12 = -5852284808832194922LL;
void init() {
}

void checksum() {
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
