#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)219;
signed char var_5 = (signed char)-68;
signed char var_8 = (signed char)78;
unsigned int var_9 = 3135717535U;
int zero = 0;
int var_10 = 915204933;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1937993329539775972ULL;
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
