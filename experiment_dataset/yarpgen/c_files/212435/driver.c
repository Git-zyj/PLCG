#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
short var_3 = (short)-21075;
unsigned char var_4 = (unsigned char)153;
short var_6 = (short)378;
long long int var_7 = -1905551161794843872LL;
unsigned int var_8 = 1089731050U;
unsigned int var_10 = 2416194661U;
int zero = 0;
signed char var_11 = (signed char)-28;
long long int var_12 = 2589859395392348733LL;
long long int var_13 = -2736455013974477285LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -1386558397884269234LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
