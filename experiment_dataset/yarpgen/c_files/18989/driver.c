#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
long long int var_5 = 4420442733978580071LL;
long long int var_9 = 386938059200243670LL;
unsigned char var_11 = (unsigned char)27;
int zero = 0;
int var_12 = -1967006843;
long long int var_13 = -3689719901074841882LL;
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
