#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)197;
signed char var_5 = (signed char)-19;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)4774;
unsigned int var_21 = 3927468622U;
unsigned long long int var_22 = 7201309476799503564ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
