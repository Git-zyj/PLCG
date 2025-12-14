#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 452813290;
signed char var_6 = (signed char)-76;
unsigned long long int var_7 = 16816182640498171731ULL;
int zero = 0;
signed char var_11 = (signed char)-24;
unsigned long long int var_12 = 12239238272054127099ULL;
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
