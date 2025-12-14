#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 527081298U;
unsigned int var_6 = 2825420263U;
signed char var_8 = (signed char)102;
unsigned long long int var_15 = 9477366069141067960ULL;
short var_17 = (short)-11224;
long long int var_19 = -2649282341293342671LL;
int zero = 0;
long long int var_20 = -2979667435185532872LL;
long long int var_21 = 7192182680875725769LL;
signed char var_22 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
