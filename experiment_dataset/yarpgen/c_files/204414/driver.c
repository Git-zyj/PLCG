#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13029;
long long int var_4 = -3647431378042000596LL;
unsigned char var_5 = (unsigned char)154;
int var_6 = 1506099134;
unsigned long long int var_7 = 16061612193845443791ULL;
unsigned long long int var_13 = 650204954113701052ULL;
signed char var_14 = (signed char)63;
int zero = 0;
int var_20 = 2005886523;
int var_21 = 330408688;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
