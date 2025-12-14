#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1596158740U;
long long int var_2 = -3505436619533131009LL;
int var_4 = -850968875;
long long int var_7 = 5259144808987354990LL;
signed char var_8 = (signed char)61;
unsigned long long int var_9 = 13156494829890346669ULL;
int zero = 0;
unsigned int var_10 = 2022839728U;
signed char var_11 = (signed char)-66;
unsigned char var_12 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
