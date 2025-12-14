#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
long long int var_1 = -5634253146309839233LL;
signed char var_2 = (signed char)-120;
unsigned char var_5 = (unsigned char)121;
int zero = 0;
unsigned short var_12 = (unsigned short)37427;
unsigned long long int var_13 = 17177244567132180873ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
