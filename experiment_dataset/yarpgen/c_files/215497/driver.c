#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8339274443736362893ULL;
unsigned short var_5 = (unsigned short)28247;
unsigned char var_6 = (unsigned char)72;
signed char var_11 = (signed char)76;
unsigned long long int var_12 = 7778549847156766585ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7234244316813097925LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
