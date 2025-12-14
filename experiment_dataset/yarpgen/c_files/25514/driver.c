#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1115921651;
unsigned short var_3 = (unsigned short)5296;
unsigned short var_9 = (unsigned short)34842;
int zero = 0;
long long int var_10 = -2988703053303216526LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)35402;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
