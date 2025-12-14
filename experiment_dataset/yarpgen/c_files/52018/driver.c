#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-79;
int var_4 = 642247680;
signed char var_7 = (signed char)41;
_Bool var_8 = (_Bool)0;
long long int var_10 = 3468774280197722237LL;
int zero = 0;
unsigned long long int var_11 = 6454374020050187408ULL;
unsigned char var_12 = (unsigned char)155;
void init() {
}

void checksum() {
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
