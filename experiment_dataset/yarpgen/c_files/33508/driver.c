#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1663908240U;
unsigned short var_7 = (unsigned short)6618;
unsigned int var_8 = 3324017139U;
int zero = 0;
int var_11 = 1950174698;
unsigned long long int var_12 = 1119377089377154556ULL;
long long int var_13 = -2515231505731585411LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
