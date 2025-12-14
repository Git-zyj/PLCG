#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -653761605995831778LL;
unsigned long long int var_6 = 13109774693694013712ULL;
int zero = 0;
long long int var_11 = 362097161009548056LL;
signed char var_12 = (signed char)7;
signed char var_13 = (signed char)-96;
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
