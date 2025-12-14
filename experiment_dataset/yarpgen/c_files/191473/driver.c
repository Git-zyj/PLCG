#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)24356;
_Bool var_11 = (_Bool)0;
long long int var_16 = 3415879927430587630LL;
int zero = 0;
unsigned long long int var_20 = 13644049773936677834ULL;
unsigned long long int var_21 = 14771634594369810734ULL;
unsigned char var_22 = (unsigned char)36;
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
