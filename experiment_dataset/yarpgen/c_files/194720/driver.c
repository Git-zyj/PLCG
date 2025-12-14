#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)36434;
unsigned short var_10 = (unsigned short)41493;
unsigned short var_14 = (unsigned short)41422;
int zero = 0;
unsigned short var_20 = (unsigned short)11299;
signed char var_21 = (signed char)-52;
unsigned short var_22 = (unsigned short)8587;
void init() {
}

void checksum() {
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
