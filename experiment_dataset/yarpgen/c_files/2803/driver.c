#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)239;
signed char var_5 = (signed char)57;
_Bool var_7 = (_Bool)1;
long long int var_11 = -7568556177560316618LL;
unsigned char var_15 = (unsigned char)94;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3874422603U;
int var_19 = -143345555;
void init() {
}

void checksum() {
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
