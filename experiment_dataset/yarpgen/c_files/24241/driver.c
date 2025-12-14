#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8125500628664585677LL;
signed char var_6 = (signed char)-61;
unsigned long long int var_9 = 2358245677422067907ULL;
unsigned short var_10 = (unsigned short)32995;
int zero = 0;
unsigned int var_15 = 979502966U;
unsigned long long int var_16 = 7482730566692423434ULL;
short var_17 = (short)-4721;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
