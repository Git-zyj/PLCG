#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 1338172909646636081LL;
signed char var_11 = (signed char)32;
unsigned int var_13 = 3180401317U;
int zero = 0;
long long int var_15 = -3520700145874047308LL;
unsigned long long int var_16 = 3025635142972361397ULL;
unsigned long long int var_17 = 12838405845575341326ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
