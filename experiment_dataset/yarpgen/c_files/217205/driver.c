#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5766549570818636063LL;
long long int var_7 = 8284977663654392607LL;
unsigned int var_12 = 87214200U;
int zero = 0;
long long int var_13 = -785666371312393680LL;
unsigned char var_14 = (unsigned char)216;
unsigned long long int var_15 = 11250505260737343834ULL;
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
