#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 1335469523U;
unsigned char var_9 = (unsigned char)238;
signed char var_10 = (signed char)-54;
unsigned char var_11 = (unsigned char)168;
int zero = 0;
unsigned long long int var_12 = 8493337485188249937ULL;
signed char var_13 = (signed char)-127;
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
