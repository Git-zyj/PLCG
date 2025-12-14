#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
_Bool var_3 = (_Bool)1;
int var_10 = 1944490222;
unsigned int var_11 = 1092678238U;
int zero = 0;
unsigned long long int var_16 = 9200206082078139888ULL;
unsigned long long int var_17 = 491676707515618613ULL;
long long int var_18 = -2528085799273834673LL;
signed char var_19 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
