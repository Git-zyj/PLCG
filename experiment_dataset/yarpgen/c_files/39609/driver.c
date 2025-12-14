#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 971597752U;
unsigned long long int var_2 = 17717788099061448770ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_12 = 3579700795U;
int zero = 0;
unsigned int var_16 = 785766267U;
short var_17 = (short)-8762;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
