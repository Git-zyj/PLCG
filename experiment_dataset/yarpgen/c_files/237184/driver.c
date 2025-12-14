#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9527053434666082149ULL;
long long int var_2 = -5846712061757472657LL;
long long int var_3 = 6127633589097978495LL;
unsigned long long int var_7 = 12743061429988406803ULL;
int var_12 = 593889276;
int zero = 0;
unsigned long long int var_13 = 15500580185781683674ULL;
short var_14 = (short)21287;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
