#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 286963142;
signed char var_2 = (signed char)-75;
int var_8 = 1306669118;
unsigned char var_9 = (unsigned char)37;
unsigned long long int var_11 = 7902552451847973565ULL;
int zero = 0;
signed char var_15 = (signed char)-81;
long long int var_16 = 6943377710408790239LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
