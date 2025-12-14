#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
unsigned int var_2 = 1834372886U;
short var_3 = (short)31492;
unsigned short var_4 = (unsigned short)4761;
unsigned long long int var_5 = 8611600959294347931ULL;
unsigned long long int var_9 = 8060044499768338148ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2658969714U;
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
