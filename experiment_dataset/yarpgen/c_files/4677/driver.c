#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
unsigned int var_4 = 2173900680U;
unsigned int var_5 = 1198219756U;
long long int var_9 = -8232909467540221429LL;
int zero = 0;
long long int var_13 = -5701293211031026545LL;
long long int var_14 = 1824774557976654474LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
