#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
unsigned char var_2 = (unsigned char)202;
unsigned long long int var_3 = 1341984919085174217ULL;
unsigned char var_6 = (unsigned char)114;
long long int var_11 = 8367816460147769656LL;
unsigned long long int var_13 = 14236532730515007350ULL;
int zero = 0;
long long int var_14 = -479943939358844464LL;
unsigned int var_15 = 341171833U;
void init() {
}

void checksum() {
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
