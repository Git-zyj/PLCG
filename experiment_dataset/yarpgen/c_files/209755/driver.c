#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11063235115193826748ULL;
unsigned long long int var_5 = 14665792874847494653ULL;
signed char var_10 = (signed char)48;
int var_11 = 1670186074;
int zero = 0;
short var_12 = (short)-29124;
unsigned long long int var_13 = 5216202657777680290ULL;
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
