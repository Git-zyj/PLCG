#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1400578613;
unsigned short var_9 = (unsigned short)4426;
signed char var_13 = (signed char)-40;
int zero = 0;
unsigned int var_19 = 3572667654U;
signed char var_20 = (signed char)49;
int var_21 = 1957420691;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
