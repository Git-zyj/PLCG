#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4110063510U;
long long int var_4 = -2912322003256260572LL;
long long int var_6 = 4487708788944497502LL;
unsigned long long int var_10 = 4593803055850375404ULL;
int zero = 0;
signed char var_14 = (signed char)55;
short var_15 = (short)5567;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
