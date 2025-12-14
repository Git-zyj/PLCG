#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27097;
unsigned long long int var_5 = 7761761937984680859ULL;
short var_9 = (short)27250;
unsigned char var_11 = (unsigned char)150;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 604843296;
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
