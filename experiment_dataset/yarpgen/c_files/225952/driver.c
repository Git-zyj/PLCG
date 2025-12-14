#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1434362917;
unsigned char var_4 = (unsigned char)34;
unsigned char var_9 = (unsigned char)18;
long long int var_13 = 6842923400660087009LL;
unsigned char var_16 = (unsigned char)54;
unsigned int var_17 = 3096357196U;
int zero = 0;
int var_19 = 130314998;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
