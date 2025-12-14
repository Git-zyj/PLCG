#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)85;
int var_4 = 1146596460;
int var_5 = -143290615;
int var_8 = 1419254830;
signed char var_14 = (signed char)-20;
int zero = 0;
long long int var_18 = 1266496500002444691LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3281318663U;
unsigned char var_21 = (unsigned char)251;
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
