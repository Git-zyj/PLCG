#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4272377631057694688ULL;
int var_7 = -177266173;
unsigned char var_8 = (unsigned char)253;
unsigned long long int var_9 = 9237130961555080070ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -2211814990845030931LL;
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
