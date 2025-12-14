#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)69;
unsigned long long int var_3 = 10460431765091491024ULL;
unsigned long long int var_7 = 7255687274844250931ULL;
signed char var_8 = (signed char)96;
unsigned long long int var_11 = 1884677298912249631ULL;
signed char var_13 = (signed char)34;
unsigned int var_16 = 1829705329U;
int zero = 0;
unsigned short var_18 = (unsigned short)5280;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)156;
long long int var_21 = 274266410118702175LL;
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
