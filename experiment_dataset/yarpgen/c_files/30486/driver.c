#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -303486331006950985LL;
int var_3 = -1915504497;
int var_4 = 1445678313;
signed char var_6 = (signed char)43;
short var_10 = (short)-9682;
unsigned char var_11 = (unsigned char)89;
unsigned char var_12 = (unsigned char)79;
unsigned char var_15 = (unsigned char)43;
int zero = 0;
int var_17 = 646692137;
long long int var_18 = -5386460569695017848LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 315140851U;
_Bool var_21 = (_Bool)1;
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
