#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 553031739U;
signed char var_6 = (signed char)-90;
signed char var_10 = (signed char)-59;
int var_12 = -1356058548;
signed char var_15 = (signed char)117;
int zero = 0;
long long int var_18 = -8089767540437646836LL;
long long int var_19 = -2251448815304114452LL;
unsigned int var_20 = 4073171129U;
int var_21 = -2112523618;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
