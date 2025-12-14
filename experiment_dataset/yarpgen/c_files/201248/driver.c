#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14865953458666167021ULL;
unsigned long long int var_2 = 5553778170785815526ULL;
int var_4 = 66020508;
unsigned int var_5 = 1927987618U;
long long int var_10 = -7462502092237169437LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)70;
int zero = 0;
int var_17 = -361671355;
unsigned long long int var_18 = 16781129535630091238ULL;
unsigned char var_19 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
