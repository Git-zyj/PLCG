#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)-88;
unsigned char var_9 = (unsigned char)222;
unsigned long long int var_11 = 15406728200743467794ULL;
int zero = 0;
signed char var_14 = (signed char)-25;
unsigned long long int var_15 = 11031977775761904009ULL;
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
