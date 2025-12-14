#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25113;
short var_2 = (short)-5054;
unsigned long long int var_3 = 16790462401535270991ULL;
int var_4 = -718876089;
int var_5 = -505527600;
int var_7 = -995102000;
unsigned int var_8 = 618760304U;
short var_9 = (short)-22691;
signed char var_10 = (signed char)56;
int zero = 0;
signed char var_11 = (signed char)-37;
short var_12 = (short)13976;
short var_13 = (short)24051;
unsigned char var_14 = (unsigned char)90;
long long int var_15 = -5055096035902102154LL;
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
