#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17118;
signed char var_3 = (signed char)32;
short var_6 = (short)26982;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)39;
unsigned int var_15 = 3411507704U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
