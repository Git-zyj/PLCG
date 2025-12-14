#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
short var_2 = (short)-11412;
signed char var_3 = (signed char)-112;
long long int var_4 = -7557392947579979395LL;
unsigned char var_6 = (unsigned char)9;
signed char var_7 = (signed char)-22;
unsigned int var_8 = 1919855785U;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_20 = (short)13428;
unsigned int var_21 = 1017021128U;
unsigned int var_22 = 2526101852U;
long long int var_23 = 3584289152190172281LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
