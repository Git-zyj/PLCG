#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 860533439U;
unsigned int var_5 = 2226439348U;
unsigned short var_6 = (unsigned short)18903;
unsigned int var_7 = 1169273337U;
int zero = 0;
signed char var_13 = (signed char)68;
unsigned int var_14 = 3248602753U;
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
