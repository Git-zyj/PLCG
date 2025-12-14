#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 189919278;
unsigned int var_2 = 3962490344U;
int var_4 = -1774755059;
unsigned long long int var_6 = 13449363527202770702ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)153;
int zero = 0;
long long int var_11 = 5442368850799313628LL;
unsigned char var_12 = (unsigned char)161;
void init() {
}

void checksum() {
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
