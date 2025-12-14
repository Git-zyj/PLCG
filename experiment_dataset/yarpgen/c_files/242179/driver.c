#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1607695263U;
short var_6 = (short)11679;
unsigned char var_15 = (unsigned char)133;
int zero = 0;
short var_17 = (short)-12712;
long long int var_18 = -5822486811624563975LL;
int var_19 = -874450140;
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
