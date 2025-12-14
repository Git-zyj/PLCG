#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2140512649761634825LL;
unsigned long long int var_6 = 3107083010113820458ULL;
short var_8 = (short)-28824;
unsigned long long int var_10 = 6434474371443637370ULL;
int var_11 = 229073097;
int zero = 0;
unsigned char var_13 = (unsigned char)218;
int var_14 = 143913447;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
