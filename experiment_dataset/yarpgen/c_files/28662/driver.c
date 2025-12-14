#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)20114;
unsigned char var_10 = (unsigned char)38;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 7938812096253691510ULL;
_Bool var_15 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 2975961987698129694ULL;
unsigned long long int var_20 = 17618190261880584577ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
