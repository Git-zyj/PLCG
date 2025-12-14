#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)113;
unsigned long long int var_7 = 1368058326875509437ULL;
signed char var_8 = (signed char)-106;
unsigned short var_14 = (unsigned short)57863;
unsigned long long int var_15 = 6151883282273817864ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)31394;
signed char var_21 = (signed char)110;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
