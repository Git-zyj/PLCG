#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-43;
unsigned short var_4 = (unsigned short)2757;
unsigned short var_9 = (unsigned short)34057;
int zero = 0;
unsigned int var_15 = 2257587876U;
signed char var_16 = (signed char)-117;
unsigned short var_17 = (unsigned short)30365;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
