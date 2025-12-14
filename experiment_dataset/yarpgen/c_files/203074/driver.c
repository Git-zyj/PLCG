#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)42;
signed char var_2 = (signed char)-54;
signed char var_16 = (signed char)94;
int zero = 0;
unsigned char var_17 = (unsigned char)204;
long long int var_18 = 4814133352255260402LL;
unsigned int var_19 = 3137043972U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
