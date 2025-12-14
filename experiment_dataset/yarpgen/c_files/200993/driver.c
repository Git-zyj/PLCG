#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6366677855526005885LL;
unsigned int var_3 = 2058128821U;
signed char var_10 = (signed char)-59;
unsigned short var_13 = (unsigned short)62031;
signed char var_16 = (signed char)67;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)119;
signed char var_20 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
