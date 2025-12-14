#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64420;
short var_4 = (short)-14085;
unsigned short var_5 = (unsigned short)35532;
signed char var_10 = (signed char)-93;
int var_13 = -169423611;
int zero = 0;
unsigned long long int var_18 = 2787581072365805913ULL;
unsigned short var_19 = (unsigned short)1230;
int var_20 = -1747727748;
long long int var_21 = -5781936205703145608LL;
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
