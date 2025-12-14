#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3963375572U;
int var_2 = -829960289;
int var_3 = 22899425;
unsigned short var_8 = (unsigned short)44871;
unsigned char var_9 = (unsigned char)5;
int zero = 0;
unsigned long long int var_11 = 362924745094867819ULL;
long long int var_12 = 2023862899190137664LL;
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
