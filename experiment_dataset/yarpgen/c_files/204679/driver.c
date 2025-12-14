#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5574988838315397423LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)115;
unsigned long long int var_9 = 13267471357027094866ULL;
int zero = 0;
signed char var_11 = (signed char)-109;
short var_12 = (short)-28645;
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
