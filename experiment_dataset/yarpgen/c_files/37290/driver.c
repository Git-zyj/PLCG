#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5312056339411639713LL;
unsigned long long int var_6 = 18309147678274006888ULL;
signed char var_8 = (signed char)45;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3381488213U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1338524665U;
long long int var_18 = 6705074136376642698LL;
unsigned char var_19 = (unsigned char)42;
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
