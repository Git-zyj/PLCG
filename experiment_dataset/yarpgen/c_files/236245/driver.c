#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19528;
unsigned char var_12 = (unsigned char)139;
unsigned short var_19 = (unsigned short)3115;
int zero = 0;
signed char var_20 = (signed char)35;
signed char var_21 = (signed char)-51;
unsigned long long int var_22 = 10949161060298800066ULL;
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
