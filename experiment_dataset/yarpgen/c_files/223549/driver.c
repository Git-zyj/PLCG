#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned long long int var_2 = 13819275994446035604ULL;
unsigned short var_3 = (unsigned short)64165;
int var_5 = -1499338441;
short var_6 = (short)-3337;
unsigned short var_8 = (unsigned short)46290;
int var_10 = -33274341;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2997650451U;
int zero = 0;
int var_16 = 165453477;
int var_17 = -523025842;
unsigned long long int var_18 = 400774570018528172ULL;
long long int var_19 = 5208034484898537998LL;
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
