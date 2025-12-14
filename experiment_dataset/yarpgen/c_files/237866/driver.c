#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2692513869U;
signed char var_1 = (signed char)-45;
unsigned char var_2 = (unsigned char)198;
unsigned long long int var_6 = 11382252170038772692ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_17 = (short)-25207;
unsigned short var_18 = (unsigned short)50163;
long long int var_19 = 7044277241739296777LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
