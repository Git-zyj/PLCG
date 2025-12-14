#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31106;
signed char var_2 = (signed char)75;
int var_3 = 279141568;
unsigned short var_8 = (unsigned short)50158;
int zero = 0;
signed char var_11 = (signed char)-73;
unsigned int var_12 = 2054760071U;
void init() {
}

void checksum() {
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
