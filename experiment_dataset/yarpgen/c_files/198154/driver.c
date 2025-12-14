#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62243;
unsigned short var_1 = (unsigned short)54843;
long long int var_2 = 7820640387266441388LL;
int var_3 = -1192921669;
signed char var_6 = (signed char)(-127 - 1);
signed char var_7 = (signed char)47;
int zero = 0;
unsigned short var_10 = (unsigned short)2887;
unsigned int var_11 = 2968854830U;
short var_12 = (short)534;
long long int var_13 = -2417368087649570447LL;
short var_14 = (short)-21087;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
