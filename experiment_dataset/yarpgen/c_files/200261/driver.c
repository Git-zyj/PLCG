#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 494092273U;
unsigned char var_8 = (unsigned char)21;
short var_9 = (short)4459;
long long int var_10 = 7793693862850237779LL;
int zero = 0;
int var_13 = 6794288;
signed char var_14 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
