#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
unsigned int var_5 = 1205199847U;
int var_8 = -2099451469;
unsigned long long int var_9 = 1586746553408466044ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 998047268U;
unsigned char var_12 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
