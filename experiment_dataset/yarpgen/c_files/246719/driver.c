#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
signed char var_1 = (signed char)-30;
unsigned int var_5 = 2487925202U;
short var_6 = (short)-6907;
unsigned int var_7 = 1587420350U;
int var_8 = -153473696;
short var_9 = (short)12115;
unsigned long long int var_12 = 12964276746466042548ULL;
unsigned int var_13 = 2781594161U;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)47;
int var_18 = 2100218950;
unsigned int var_19 = 3361545712U;
short var_20 = (short)-4504;
short var_21 = (short)32263;
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
