#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 2302658429U;
unsigned char var_7 = (unsigned char)84;
int zero = 0;
unsigned short var_13 = (unsigned short)61676;
unsigned long long int var_14 = 16033825975195134757ULL;
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
