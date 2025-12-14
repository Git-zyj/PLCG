#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17907;
signed char var_2 = (signed char)-58;
long long int var_3 = -6379267544850705670LL;
long long int var_4 = -6232755996227461361LL;
unsigned char var_7 = (unsigned char)154;
int var_9 = -858620443;
unsigned long long int var_10 = 10466502301824864966ULL;
int zero = 0;
long long int var_11 = 7137222033673940598LL;
long long int var_12 = -4206690262709293867LL;
signed char var_13 = (signed char)99;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
