#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -482360209746424751LL;
long long int var_8 = -7599687917154661731LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 9211035925260876383ULL;
int var_17 = 327209550;
void init() {
}

void checksum() {
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
