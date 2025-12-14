#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3921104607U;
unsigned char var_17 = (unsigned char)77;
unsigned int var_19 = 1970836534U;
int zero = 0;
unsigned long long int var_20 = 7841219896780059342ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)229;
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
