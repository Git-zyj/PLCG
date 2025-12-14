#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
long long int var_1 = -9205656648296216379LL;
unsigned int var_2 = 3128836722U;
int var_5 = 834867389;
unsigned long long int var_6 = 16328910672202949584ULL;
long long int var_7 = -6271339185274983168LL;
unsigned char var_8 = (unsigned char)170;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-42;
int zero = 0;
signed char var_13 = (signed char)43;
unsigned long long int var_14 = 813590231461604769ULL;
unsigned int var_15 = 3995545913U;
long long int var_16 = 7312086819372858036LL;
int var_17 = 1654400183;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
