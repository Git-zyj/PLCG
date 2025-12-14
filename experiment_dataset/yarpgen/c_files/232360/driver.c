#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15786;
_Bool var_1 = (_Bool)0;
long long int var_2 = 5279349691396563481LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 14484502520759021793ULL;
int zero = 0;
unsigned int var_12 = 3656406813U;
int var_13 = 1858400687;
unsigned char var_14 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
