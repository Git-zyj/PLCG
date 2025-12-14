#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
long long int var_1 = -7537679595827131491LL;
signed char var_3 = (signed char)-49;
signed char var_4 = (signed char)75;
unsigned long long int var_6 = 16861083228073592521ULL;
long long int var_8 = 4968970260000653613LL;
unsigned char var_9 = (unsigned char)3;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-21;
int var_14 = -2028339304;
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
