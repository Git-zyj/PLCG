#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1504353511;
int var_6 = 1956704245;
long long int var_7 = -7552039125133485122LL;
unsigned int var_9 = 677127572U;
long long int var_10 = -1037572248202279514LL;
int zero = 0;
unsigned int var_11 = 1339851760U;
signed char var_12 = (signed char)42;
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
