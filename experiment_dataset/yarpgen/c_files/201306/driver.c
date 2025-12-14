#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)55;
short var_4 = (short)22622;
unsigned long long int var_5 = 13902248503430942247ULL;
unsigned char var_8 = (unsigned char)158;
unsigned long long int var_9 = 14237816419672295696ULL;
int zero = 0;
short var_10 = (short)-11677;
unsigned long long int var_11 = 17136218701951768806ULL;
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
