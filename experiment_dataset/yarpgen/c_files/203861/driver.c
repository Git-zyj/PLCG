#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5170626614625291922ULL;
unsigned int var_4 = 3326253255U;
unsigned long long int var_5 = 7481498638714754687ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)120;
unsigned short var_12 = (unsigned short)5177;
unsigned int var_13 = 2359818296U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
