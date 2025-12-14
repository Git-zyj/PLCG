#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)19972;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)59543;
unsigned int var_9 = 1694439152U;
int zero = 0;
signed char var_10 = (signed char)57;
int var_11 = 1308855889;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
