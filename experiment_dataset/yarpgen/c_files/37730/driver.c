#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17870;
unsigned int var_3 = 3104831305U;
long long int var_4 = 6101435995385640200LL;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)177;
unsigned int var_13 = 2744423884U;
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
