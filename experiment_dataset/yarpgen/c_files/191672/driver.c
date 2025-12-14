#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4097806653U;
unsigned char var_8 = (unsigned char)251;
unsigned char var_11 = (unsigned char)237;
int zero = 0;
short var_13 = (short)-20545;
int var_14 = 1605962354;
short var_15 = (short)-11738;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
