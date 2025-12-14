#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)188;
unsigned long long int var_11 = 7042360236343850280ULL;
int zero = 0;
unsigned long long int var_14 = 16117600754954366161ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)11062;
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
