#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1994681801U;
unsigned int var_4 = 125537655U;
unsigned int var_6 = 4019340146U;
unsigned int var_9 = 548568948U;
int zero = 0;
unsigned long long int var_10 = 2111988787537601976ULL;
long long int var_11 = -8710550506793291459LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
