#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-55;
unsigned long long int var_9 = 469618749779638194ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)35399;
unsigned short var_13 = (unsigned short)41402;
signed char var_14 = (signed char)6;
unsigned long long int var_15 = 10853539291472126419ULL;
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
