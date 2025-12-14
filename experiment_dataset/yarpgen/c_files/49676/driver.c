#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
unsigned long long int var_2 = 9360698880829255767ULL;
int var_4 = -1313699828;
unsigned int var_7 = 2058093183U;
int var_8 = 769752432;
int zero = 0;
unsigned short var_19 = (unsigned short)50763;
long long int var_20 = 7370019170272730833LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
