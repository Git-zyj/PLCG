#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)208;
signed char var_7 = (signed char)-53;
signed char var_8 = (signed char)22;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)121;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 14208947362878833024ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
