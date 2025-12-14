#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1521696879;
signed char var_9 = (signed char)33;
_Bool var_14 = (_Bool)0;
long long int var_16 = 8701605742357237210LL;
int var_19 = 1067738747;
int zero = 0;
signed char var_20 = (signed char)45;
int var_21 = 1642221307;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
