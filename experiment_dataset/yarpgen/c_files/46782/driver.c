#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)13479;
signed char var_5 = (signed char)35;
unsigned int var_6 = 2917086902U;
long long int var_7 = -661192907183837623LL;
signed char var_9 = (signed char)88;
signed char var_10 = (signed char)-81;
unsigned int var_11 = 3778001106U;
signed char var_16 = (signed char)-118;
signed char var_18 = (signed char)85;
int zero = 0;
signed char var_19 = (signed char)12;
unsigned short var_20 = (unsigned short)61881;
void init() {
}

void checksum() {
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
