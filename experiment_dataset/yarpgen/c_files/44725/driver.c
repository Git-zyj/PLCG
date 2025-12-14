#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2238;
unsigned long long int var_1 = 15522265155303777234ULL;
signed char var_2 = (signed char)-18;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)160;
long long int var_5 = 4915039304685158060LL;
unsigned int var_8 = 1624625571U;
int zero = 0;
int var_10 = 2063594189;
signed char var_11 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
