#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17406;
unsigned int var_6 = 3606764205U;
unsigned long long int var_7 = 12962798278736732108ULL;
long long int var_9 = -7346529949883482685LL;
int zero = 0;
unsigned long long int var_10 = 4849045476861887300ULL;
long long int var_11 = -2531090322065667443LL;
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
