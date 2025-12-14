#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_6 = 3862092284508798976LL;
unsigned long long int var_8 = 8612844357660125856ULL;
unsigned long long int var_9 = 12254706179933105530ULL;
int zero = 0;
signed char var_10 = (signed char)-25;
unsigned int var_11 = 1557569222U;
unsigned short var_12 = (unsigned short)46317;
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
