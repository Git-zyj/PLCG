#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7932867069605820305LL;
unsigned long long int var_1 = 17889263578833965962ULL;
unsigned short var_5 = (unsigned short)50187;
signed char var_10 = (signed char)110;
int zero = 0;
short var_18 = (short)21509;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 13736908924885638367ULL;
unsigned int var_21 = 629428657U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
