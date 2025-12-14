#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1894759857922464556ULL;
unsigned short var_2 = (unsigned short)38092;
unsigned short var_3 = (unsigned short)23997;
signed char var_4 = (signed char)-114;
int zero = 0;
unsigned long long int var_12 = 7775378688299627070ULL;
unsigned long long int var_13 = 9712680062613793130ULL;
unsigned short var_14 = (unsigned short)39222;
unsigned long long int var_15 = 7042548603341950231ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
