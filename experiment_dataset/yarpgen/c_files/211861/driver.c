#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3285888915897373766LL;
unsigned char var_3 = (unsigned char)98;
unsigned char var_8 = (unsigned char)144;
int zero = 0;
unsigned long long int var_15 = 13264819646539689146ULL;
unsigned char var_16 = (unsigned char)225;
unsigned long long int var_17 = 15471188730355497592ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
