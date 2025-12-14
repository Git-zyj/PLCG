#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3704971023U;
unsigned long long int var_4 = 15808796630181820435ULL;
short var_5 = (short)16877;
long long int var_13 = 6453902223670052600LL;
unsigned int var_14 = 3796770661U;
int zero = 0;
short var_17 = (short)-25011;
unsigned short var_18 = (unsigned short)58666;
short var_19 = (short)-2658;
void init() {
}

void checksum() {
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
