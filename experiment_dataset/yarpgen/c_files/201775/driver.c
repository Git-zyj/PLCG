#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4163046503U;
long long int var_12 = -5733129712445147296LL;
signed char var_14 = (signed char)-58;
int zero = 0;
unsigned char var_18 = (unsigned char)169;
signed char var_19 = (signed char)32;
unsigned char var_20 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
