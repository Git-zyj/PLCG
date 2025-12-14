#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12581450010686168690ULL;
long long int var_3 = 570626293184054398LL;
short var_4 = (short)11401;
signed char var_5 = (signed char)36;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 3574045278812108448ULL;
unsigned char var_11 = (unsigned char)49;
int zero = 0;
int var_12 = -1631905482;
int var_13 = -1650723837;
short var_14 = (short)-32041;
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
