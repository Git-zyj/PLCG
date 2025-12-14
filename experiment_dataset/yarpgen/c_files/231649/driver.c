#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)100;
unsigned char var_5 = (unsigned char)161;
unsigned int var_8 = 785068161U;
int var_11 = 967143208;
int zero = 0;
signed char var_13 = (signed char)117;
unsigned int var_14 = 2667940408U;
unsigned int var_15 = 2242890195U;
unsigned short var_16 = (unsigned short)50368;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
