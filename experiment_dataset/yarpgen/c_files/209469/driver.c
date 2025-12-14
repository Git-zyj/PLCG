#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1485916689;
short var_2 = (short)4583;
unsigned long long int var_3 = 1834435957388964462ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-124;
int var_11 = 2113365588;
unsigned int var_12 = 2081773091U;
unsigned long long int var_13 = 17685078434484118380ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
