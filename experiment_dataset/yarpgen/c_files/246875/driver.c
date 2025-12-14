#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-27035;
int var_4 = -714036699;
signed char var_6 = (signed char)69;
unsigned char var_9 = (unsigned char)45;
int zero = 0;
unsigned int var_10 = 731856063U;
long long int var_11 = -3715110924355732445LL;
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
