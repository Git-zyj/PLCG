#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2460754038U;
int var_5 = 142865966;
unsigned int var_12 = 2980883333U;
unsigned int var_18 = 1684289496U;
int zero = 0;
unsigned short var_19 = (unsigned short)21414;
unsigned long long int var_20 = 13399849779007957872ULL;
unsigned char var_21 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
