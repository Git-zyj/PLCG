#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2568083901516178732ULL;
short var_7 = (short)21001;
unsigned short var_8 = (unsigned short)41106;
signed char var_13 = (signed char)-69;
int zero = 0;
unsigned long long int var_16 = 12446192587711606818ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
