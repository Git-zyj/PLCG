#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3153668688U;
signed char var_2 = (signed char)35;
long long int var_7 = -2264379238176490048LL;
unsigned long long int var_8 = 7656155660326541478ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 13820865826475685984ULL;
unsigned char var_11 = (unsigned char)15;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
