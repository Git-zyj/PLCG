#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1989988541U;
unsigned int var_1 = 3477925677U;
unsigned char var_9 = (unsigned char)75;
int zero = 0;
unsigned long long int var_19 = 898705697710543117ULL;
unsigned int var_20 = 2020470989U;
void init() {
}

void checksum() {
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
