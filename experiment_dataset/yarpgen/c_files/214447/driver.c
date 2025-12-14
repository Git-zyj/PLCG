#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63409;
unsigned int var_7 = 3613159421U;
_Bool var_9 = (_Bool)0;
long long int var_10 = 2284472315886150272LL;
int zero = 0;
unsigned long long int var_11 = 1889513727077769696ULL;
unsigned long long int var_12 = 12669648961812211662ULL;
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
