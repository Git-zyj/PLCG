#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 690129361667993970ULL;
int var_1 = -285972921;
unsigned long long int var_2 = 14971407796658428142ULL;
long long int var_3 = -3940330976223897102LL;
int var_4 = 1395222385;
unsigned short var_7 = (unsigned short)62600;
int zero = 0;
unsigned short var_10 = (unsigned short)58288;
unsigned short var_11 = (unsigned short)4766;
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
