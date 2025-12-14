#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)23;
int var_5 = -78489261;
unsigned long long int var_9 = 8976378918650397007ULL;
unsigned char var_10 = (unsigned char)216;
int zero = 0;
long long int var_12 = 5684613767063643513LL;
unsigned long long int var_13 = 11169569755731252825ULL;
unsigned int var_14 = 2887521181U;
void init() {
}

void checksum() {
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
