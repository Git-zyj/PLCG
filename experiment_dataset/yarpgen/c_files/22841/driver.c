#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 842186656;
int var_9 = -2045295823;
unsigned long long int var_10 = 15913387357847860883ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)23;
long long int var_21 = -3466257909192644483LL;
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
