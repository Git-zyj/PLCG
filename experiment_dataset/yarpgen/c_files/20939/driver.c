#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)47649;
unsigned short var_9 = (unsigned short)58685;
unsigned long long int var_11 = 12270953492388498353ULL;
int zero = 0;
unsigned long long int var_18 = 18001221808554599095ULL;
unsigned long long int var_19 = 12113973311520371289ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
