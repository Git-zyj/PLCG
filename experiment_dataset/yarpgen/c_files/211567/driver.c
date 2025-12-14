#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4931562186844752099LL;
signed char var_4 = (signed char)57;
signed char var_6 = (signed char)95;
unsigned int var_7 = 2619987188U;
signed char var_9 = (signed char)79;
unsigned int var_14 = 2301482302U;
int zero = 0;
signed char var_19 = (signed char)53;
unsigned long long int var_20 = 9874989910336361159ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
