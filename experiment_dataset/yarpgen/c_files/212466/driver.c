#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13999;
int var_3 = -2062638290;
signed char var_4 = (signed char)22;
int var_6 = 81407053;
long long int var_9 = -1946146929074665369LL;
int zero = 0;
int var_12 = -683259054;
unsigned int var_13 = 2300091713U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
