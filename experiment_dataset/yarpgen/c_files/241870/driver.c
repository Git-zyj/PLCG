#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58656;
long long int var_3 = 1613423743389481732LL;
unsigned short var_4 = (unsigned short)31051;
_Bool var_5 = (_Bool)0;
int var_9 = -1642408445;
int zero = 0;
unsigned short var_12 = (unsigned short)46122;
int var_13 = -1861013458;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
