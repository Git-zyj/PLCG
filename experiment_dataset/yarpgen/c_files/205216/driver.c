#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1562710021U;
_Bool var_2 = (_Bool)1;
long long int var_8 = -15039995037812705LL;
long long int var_9 = -812357862311912039LL;
long long int var_10 = 2590901173423525570LL;
unsigned char var_11 = (unsigned char)156;
unsigned long long int var_12 = 12105584448351941397ULL;
signed char var_14 = (signed char)121;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4193606518U;
unsigned char var_21 = (unsigned char)173;
unsigned char var_22 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
