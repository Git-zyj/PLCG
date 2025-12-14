#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2100872172;
unsigned int var_2 = 2505851097U;
unsigned int var_3 = 2990420224U;
signed char var_4 = (signed char)39;
signed char var_5 = (signed char)-82;
signed char var_6 = (signed char)58;
unsigned char var_7 = (unsigned char)124;
short var_8 = (short)-24932;
unsigned short var_9 = (unsigned short)10123;
int zero = 0;
unsigned char var_11 = (unsigned char)14;
long long int var_12 = 1344803565820171739LL;
unsigned long long int var_13 = 18147192018088577255ULL;
short var_14 = (short)4080;
short var_15 = (short)31622;
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
