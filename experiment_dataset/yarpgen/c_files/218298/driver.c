#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -913506348;
unsigned short var_6 = (unsigned short)63193;
_Bool var_7 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-58;
long long int var_21 = -5806533552239376598LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
