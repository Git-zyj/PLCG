#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
long long int var_2 = -7881799046796468506LL;
int var_3 = 1330478860;
int var_4 = 57343032;
unsigned int var_5 = 3385843778U;
unsigned int var_7 = 2526512643U;
int var_8 = -2063151268;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 4218800872U;
short var_11 = (short)-1622;
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
