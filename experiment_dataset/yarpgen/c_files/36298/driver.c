#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23903;
unsigned short var_5 = (unsigned short)13602;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)112;
int var_20 = -546325285;
signed char var_21 = (signed char)-27;
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
