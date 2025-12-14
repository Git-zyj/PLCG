#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2559338017985721876LL;
long long int var_7 = -1978600700939543465LL;
int var_11 = 1659247733;
int zero = 0;
unsigned char var_12 = (unsigned char)50;
unsigned char var_13 = (unsigned char)159;
unsigned char var_14 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
