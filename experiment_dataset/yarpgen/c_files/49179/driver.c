#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2209332484U;
long long int var_7 = -9006194643333558056LL;
signed char var_8 = (signed char)-51;
signed char var_12 = (signed char)-82;
long long int var_14 = 3007296500765627654LL;
short var_15 = (short)5809;
unsigned int var_16 = 322607626U;
int zero = 0;
unsigned long long int var_18 = 4323147719154202666ULL;
unsigned long long int var_19 = 14342914103307872575ULL;
void init() {
}

void checksum() {
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
