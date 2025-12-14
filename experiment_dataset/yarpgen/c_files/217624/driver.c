#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8849588108241658695LL;
signed char var_9 = (signed char)96;
unsigned long long int var_11 = 3023693186559186233ULL;
signed char var_15 = (signed char)-98;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_20 = (short)31438;
_Bool var_21 = (_Bool)0;
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
