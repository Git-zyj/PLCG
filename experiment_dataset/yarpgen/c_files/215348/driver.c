#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 9248047U;
unsigned int var_3 = 3657648118U;
int var_6 = -2015171571;
unsigned long long int var_7 = 10239096732899565345ULL;
unsigned char var_8 = (unsigned char)7;
unsigned char var_9 = (unsigned char)156;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 14362051304272295275ULL;
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
