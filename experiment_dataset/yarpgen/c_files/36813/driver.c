#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-6;
long long int var_3 = 7748727167944245154LL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int zero = 0;
short var_18 = (short)-26640;
unsigned long long int var_19 = 8433081376522528811ULL;
void init() {
}

void checksum() {
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
