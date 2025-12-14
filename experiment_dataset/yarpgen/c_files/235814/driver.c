#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1524530354286098383LL;
signed char var_8 = (signed char)97;
short var_9 = (short)-25216;
int zero = 0;
unsigned short var_10 = (unsigned short)28534;
unsigned int var_11 = 3050228409U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
