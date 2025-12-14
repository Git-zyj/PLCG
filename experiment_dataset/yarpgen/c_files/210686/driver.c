#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-95;
signed char var_4 = (signed char)38;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)17;
signed char var_10 = (signed char)-78;
signed char var_11 = (signed char)98;
unsigned int var_13 = 3375560990U;
short var_14 = (short)21374;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8920673240224420945LL;
void init() {
}

void checksum() {
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
