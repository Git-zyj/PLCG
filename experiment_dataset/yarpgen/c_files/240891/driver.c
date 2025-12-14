#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -54248830;
unsigned long long int var_2 = 6225050877968875568ULL;
int var_5 = -2027532583;
int var_13 = -1230924858;
int zero = 0;
signed char var_15 = (signed char)69;
unsigned long long int var_16 = 5426093832488663219ULL;
void init() {
}

void checksum() {
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
