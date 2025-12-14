#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
long long int var_1 = 301938137746942248LL;
unsigned char var_2 = (unsigned char)178;
int var_4 = -1378961629;
unsigned char var_7 = (unsigned char)189;
signed char var_9 = (signed char)-120;
int zero = 0;
signed char var_10 = (signed char)-39;
signed char var_11 = (signed char)9;
unsigned int var_12 = 3728349233U;
unsigned long long int var_13 = 10234499585770005381ULL;
unsigned int var_14 = 3540105008U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
