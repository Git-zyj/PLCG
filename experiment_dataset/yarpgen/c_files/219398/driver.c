#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 920039218U;
signed char var_4 = (signed char)-105;
unsigned long long int var_12 = 7612324253496436145ULL;
int zero = 0;
unsigned int var_20 = 3675042869U;
unsigned char var_21 = (unsigned char)106;
signed char var_22 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
