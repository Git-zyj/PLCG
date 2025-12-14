#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1608094012;
signed char var_1 = (signed char)-49;
unsigned char var_4 = (unsigned char)37;
int var_7 = -464823892;
int var_11 = 1762845960;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10446844904089435209ULL;
void init() {
}

void checksum() {
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
