#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14263555072269102311ULL;
unsigned long long int var_15 = 5662973494654295868ULL;
unsigned char var_18 = (unsigned char)41;
int zero = 0;
long long int var_19 = -8646081016079358889LL;
signed char var_20 = (signed char)78;
long long int var_21 = 6073777814709842025LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
