#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -1926132454757460877LL;
unsigned char var_10 = (unsigned char)50;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)9;
int zero = 0;
long long int var_20 = 2181168421147840087LL;
_Bool var_21 = (_Bool)0;
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
