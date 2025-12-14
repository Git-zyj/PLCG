#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-110;
unsigned short var_6 = (unsigned short)3846;
unsigned char var_9 = (unsigned char)190;
int zero = 0;
signed char var_13 = (signed char)-78;
unsigned short var_14 = (unsigned short)163;
long long int var_15 = -7287646296073087063LL;
unsigned short var_16 = (unsigned short)3383;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
