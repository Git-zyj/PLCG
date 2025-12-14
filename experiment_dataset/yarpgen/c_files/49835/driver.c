#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
int var_2 = 706280612;
signed char var_7 = (signed char)69;
signed char var_9 = (signed char)74;
signed char var_11 = (signed char)-106;
int zero = 0;
signed char var_15 = (signed char)83;
unsigned char var_16 = (unsigned char)89;
int var_17 = -1822603967;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
