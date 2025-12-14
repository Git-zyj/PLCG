#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-13;
unsigned char var_10 = (unsigned char)151;
short var_14 = (short)-10608;
int zero = 0;
unsigned short var_18 = (unsigned short)24526;
short var_19 = (short)-27058;
long long int var_20 = 2675947523491000015LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
