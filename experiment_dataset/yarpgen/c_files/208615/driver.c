#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4205638909U;
long long int var_4 = 5113889443605682107LL;
short var_5 = (short)20470;
unsigned long long int var_7 = 7207888526331248370ULL;
int var_8 = -1581988012;
signed char var_9 = (signed char)63;
int var_14 = 1646180635;
unsigned short var_16 = (unsigned short)15193;
int zero = 0;
short var_17 = (short)21780;
short var_18 = (short)9357;
unsigned long long int var_19 = 11583599335926477ULL;
unsigned long long int var_20 = 4881818522632631027ULL;
unsigned char var_21 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
