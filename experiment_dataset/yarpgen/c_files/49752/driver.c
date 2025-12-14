#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 617378220U;
signed char var_1 = (signed char)118;
unsigned char var_5 = (unsigned char)100;
unsigned int var_7 = 553673488U;
signed char var_9 = (signed char)-113;
long long int var_11 = -7749245800793842480LL;
int zero = 0;
signed char var_18 = (signed char)-37;
unsigned long long int var_19 = 7435771596494218259ULL;
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
