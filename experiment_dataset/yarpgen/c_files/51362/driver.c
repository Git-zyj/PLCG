#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10152218686264435924ULL;
unsigned long long int var_3 = 15967174109065113121ULL;
signed char var_9 = (signed char)(-127 - 1);
signed char var_13 = (signed char)71;
_Bool var_15 = (_Bool)0;
int var_17 = 1339061143;
unsigned long long int var_18 = 18331803115705061570ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)22943;
signed char var_20 = (signed char)-101;
unsigned short var_21 = (unsigned short)64334;
void init() {
}

void checksum() {
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
