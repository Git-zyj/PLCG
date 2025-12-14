#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13445;
unsigned short var_8 = (unsigned short)60111;
unsigned long long int var_9 = 12197571346248215930ULL;
unsigned long long int var_11 = 949583239817504460ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)105;
void init() {
}

void checksum() {
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
