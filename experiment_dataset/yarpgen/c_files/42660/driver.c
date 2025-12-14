#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)109;
unsigned short var_10 = (unsigned short)52245;
unsigned long long int var_13 = 3115420191499413384ULL;
int zero = 0;
signed char var_20 = (signed char)50;
unsigned long long int var_21 = 4441598918094367638ULL;
void init() {
}

void checksum() {
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
