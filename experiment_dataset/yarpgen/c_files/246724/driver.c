#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9582269884785495904ULL;
long long int var_2 = -5924866871775993379LL;
unsigned long long int var_5 = 4253992574046864315ULL;
unsigned char var_6 = (unsigned char)6;
unsigned int var_8 = 2457730805U;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1759159282U;
unsigned long long int var_11 = 10635403945114524885ULL;
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
