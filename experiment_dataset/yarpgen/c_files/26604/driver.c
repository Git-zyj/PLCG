#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5768575856698831975LL;
unsigned char var_2 = (unsigned char)206;
unsigned int var_5 = 3094874196U;
int zero = 0;
int var_12 = -19625247;
unsigned int var_13 = 314258383U;
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
