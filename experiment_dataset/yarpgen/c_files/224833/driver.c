#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-108;
_Bool var_2 = (_Bool)0;
long long int var_4 = 8525869213304653291LL;
short var_10 = (short)-3511;
int zero = 0;
long long int var_12 = 4787634648635534930LL;
short var_13 = (short)-32549;
int var_14 = -1566745883;
void init() {
}

void checksum() {
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
