#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2259015648U;
unsigned char var_7 = (unsigned char)157;
signed char var_13 = (signed char)-73;
unsigned long long int var_15 = 3907028216554279779ULL;
unsigned char var_16 = (unsigned char)61;
int zero = 0;
unsigned char var_19 = (unsigned char)231;
unsigned short var_20 = (unsigned short)41706;
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
