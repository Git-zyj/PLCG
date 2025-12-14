#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1925209919;
long long int var_13 = -2677387704607017608LL;
int var_16 = -1932760856;
int zero = 0;
unsigned int var_17 = 1178424624U;
unsigned long long int var_18 = 12982507004597814219ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
