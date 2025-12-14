#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4257205105U;
short var_5 = (short)-12158;
int var_8 = 820359174;
unsigned int var_9 = 989329902U;
signed char var_10 = (signed char)15;
int zero = 0;
int var_13 = 374979134;
unsigned char var_14 = (unsigned char)11;
unsigned long long int var_15 = 5743599760650883293ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
