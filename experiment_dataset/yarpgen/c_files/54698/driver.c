#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
signed char var_1 = (signed char)-74;
_Bool var_3 = (_Bool)0;
short var_5 = (short)9208;
int var_7 = 482954559;
unsigned int var_8 = 3757498816U;
unsigned long long int var_9 = 17559290733075424771ULL;
int var_11 = -2055844434;
int zero = 0;
short var_13 = (short)2591;
unsigned char var_14 = (unsigned char)183;
unsigned long long int var_15 = 8387343463156727250ULL;
unsigned int var_16 = 3316808224U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
