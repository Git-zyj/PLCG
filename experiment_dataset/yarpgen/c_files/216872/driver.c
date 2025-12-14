#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 942066836U;
signed char var_3 = (signed char)-29;
long long int var_5 = 7292790709843556845LL;
unsigned short var_10 = (unsigned short)50770;
int zero = 0;
unsigned long long int var_12 = 3400906720215482231ULL;
int var_13 = 336346666;
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
