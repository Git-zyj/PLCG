#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58478;
_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)56;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)577;
unsigned long long int var_8 = 10544996568051155803ULL;
signed char var_9 = (signed char)107;
unsigned short var_10 = (unsigned short)57888;
int zero = 0;
signed char var_14 = (signed char)-11;
long long int var_15 = 1890501031158283478LL;
signed char var_16 = (signed char)-77;
unsigned int var_17 = 2643474495U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
