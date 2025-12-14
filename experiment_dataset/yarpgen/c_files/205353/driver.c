#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
signed char var_1 = (signed char)-89;
unsigned long long int var_2 = 5675906857439465237ULL;
unsigned int var_5 = 3325264073U;
int zero = 0;
unsigned short var_11 = (unsigned short)39143;
unsigned char var_12 = (unsigned char)220;
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
