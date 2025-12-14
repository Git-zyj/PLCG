#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
unsigned long long int var_1 = 17368693778516233826ULL;
unsigned char var_2 = (unsigned char)31;
short var_3 = (short)-24263;
unsigned long long int var_8 = 9194678907752970584ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)16;
unsigned long long int var_13 = 12865414637239154554ULL;
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
