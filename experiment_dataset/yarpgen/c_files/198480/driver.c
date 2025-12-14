#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-106;
unsigned char var_3 = (unsigned char)162;
unsigned long long int var_4 = 310854334949608591ULL;
int var_6 = -1761774618;
unsigned short var_7 = (unsigned short)30507;
unsigned long long int var_8 = 5581284082038324391ULL;
unsigned long long int var_9 = 7234832585975441444ULL;
long long int var_10 = -9052794141838195731LL;
int var_12 = 1360143538;
int zero = 0;
unsigned int var_15 = 3483913125U;
int var_16 = 925113119;
long long int var_17 = -1963876640637597893LL;
unsigned short var_18 = (unsigned short)58839;
unsigned short var_19 = (unsigned short)25935;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
