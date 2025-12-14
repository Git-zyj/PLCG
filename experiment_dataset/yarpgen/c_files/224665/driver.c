#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2089113423U;
unsigned short var_6 = (unsigned short)19159;
signed char var_7 = (signed char)-37;
unsigned char var_9 = (unsigned char)51;
int zero = 0;
short var_11 = (short)14943;
unsigned char var_12 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
