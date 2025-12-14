#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)53786;
unsigned short var_6 = (unsigned short)54156;
signed char var_7 = (signed char)-95;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 3737985884865240673ULL;
unsigned long long int var_15 = 7082421979429307773ULL;
int var_16 = 657291308;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
