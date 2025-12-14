#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-13570;
long long int var_5 = -2305898572540834222LL;
_Bool var_7 = (_Bool)1;
short var_9 = (short)26462;
unsigned int var_10 = 1150016749U;
int zero = 0;
unsigned short var_12 = (unsigned short)59138;
unsigned short var_13 = (unsigned short)19755;
unsigned char var_14 = (unsigned char)104;
unsigned long long int var_15 = 17983864454159614429ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
