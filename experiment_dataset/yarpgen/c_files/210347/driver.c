#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6263703423696800207ULL;
unsigned short var_4 = (unsigned short)50268;
unsigned long long int var_8 = 8949803627240516366ULL;
unsigned short var_9 = (unsigned short)1846;
int zero = 0;
int var_17 = -352184198;
_Bool var_18 = (_Bool)1;
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
