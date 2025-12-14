#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_4 = -2031172099;
unsigned long long int var_5 = 15041967196753923440ULL;
unsigned char var_7 = (unsigned char)51;
signed char var_9 = (signed char)36;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 14103941466202767441ULL;
long long int var_15 = 603424852761161246LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
