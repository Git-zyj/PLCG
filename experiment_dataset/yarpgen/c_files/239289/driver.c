#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
signed char var_1 = (signed char)-124;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_14 = -4056088686901178742LL;
unsigned char var_15 = (unsigned char)67;
unsigned char var_16 = (unsigned char)27;
void init() {
}

void checksum() {
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
