#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2924329923349771625LL;
unsigned int var_1 = 2789130287U;
long long int var_3 = -2966996195145485531LL;
signed char var_4 = (signed char)-80;
unsigned int var_5 = 464663346U;
unsigned int var_9 = 1938445578U;
int zero = 0;
unsigned int var_11 = 2004052289U;
signed char var_12 = (signed char)-27;
_Bool var_13 = (_Bool)1;
long long int var_14 = 4769563663085728266LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
