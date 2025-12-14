#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_5 = 929514091;
long long int var_6 = -5241090469432257431LL;
long long int var_7 = -8634355121871311000LL;
long long int var_11 = 4908609870766774492LL;
int zero = 0;
unsigned char var_12 = (unsigned char)202;
unsigned long long int var_13 = 9694896124322773538ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
