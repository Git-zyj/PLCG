#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
_Bool var_1 = (_Bool)1;
unsigned char var_7 = (unsigned char)225;
unsigned long long int var_8 = 10349481852773655865ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_12 = 1615804443;
short var_13 = (short)21531;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
