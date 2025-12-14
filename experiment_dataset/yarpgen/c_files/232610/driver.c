#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)92;
unsigned int var_5 = 2052503702U;
unsigned long long int var_7 = 12143715822629796342ULL;
unsigned int var_8 = 1133131185U;
int zero = 0;
signed char var_10 = (signed char)-102;
unsigned int var_11 = 4143435689U;
signed char var_12 = (signed char)92;
long long int var_13 = 4983147506817823099LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
