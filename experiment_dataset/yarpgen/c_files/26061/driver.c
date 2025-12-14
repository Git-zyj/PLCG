#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1140210279;
unsigned int var_1 = 1581088410U;
unsigned char var_2 = (unsigned char)229;
_Bool var_3 = (_Bool)1;
int zero = 0;
long long int var_11 = 2455355996216223744LL;
long long int var_12 = 3349606122127169622LL;
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
