#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
long long int var_3 = -6863623418845433243LL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)-29;
unsigned long long int var_11 = 15127088093925753873ULL;
int zero = 0;
unsigned int var_12 = 3226143575U;
unsigned long long int var_13 = 12107150881241786715ULL;
int var_14 = -599124857;
long long int var_15 = 8511251393574618516LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
