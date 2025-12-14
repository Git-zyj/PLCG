#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7012194801735715705LL;
unsigned long long int var_3 = 4027443293919541002ULL;
signed char var_7 = (signed char)81;
unsigned long long int var_9 = 11566438983439249591ULL;
int zero = 0;
signed char var_10 = (signed char)-16;
unsigned short var_11 = (unsigned short)50432;
signed char var_12 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
