#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1347336590;
unsigned short var_2 = (unsigned short)7567;
unsigned short var_3 = (unsigned short)32304;
long long int var_5 = -579113479269856545LL;
unsigned int var_9 = 3785885315U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)15696;
int zero = 0;
unsigned short var_13 = (unsigned short)5079;
int var_14 = -1047928549;
unsigned int var_15 = 404752409U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
