#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42946;
_Bool var_1 = (_Bool)1;
short var_2 = (short)12970;
_Bool var_3 = (_Bool)1;
long long int var_15 = 6285488289642883131LL;
int zero = 0;
unsigned char var_17 = (unsigned char)112;
signed char var_18 = (signed char)115;
unsigned short var_19 = (unsigned short)40886;
unsigned short var_20 = (unsigned short)38564;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
