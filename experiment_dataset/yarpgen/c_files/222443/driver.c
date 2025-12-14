#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53160;
unsigned long long int var_1 = 3361792421896665649ULL;
unsigned long long int var_2 = 7722667142925416795ULL;
signed char var_5 = (signed char)46;
unsigned long long int var_12 = 17607536238361340696ULL;
unsigned long long int var_14 = 4395163215010276539ULL;
int zero = 0;
signed char var_20 = (signed char)-121;
short var_21 = (short)30954;
short var_22 = (short)-32681;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
