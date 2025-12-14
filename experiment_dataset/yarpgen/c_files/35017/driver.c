#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1432208914U;
signed char var_4 = (signed char)-95;
signed char var_7 = (signed char)118;
long long int var_8 = 776510272990063574LL;
long long int var_12 = 2909235706415333555LL;
unsigned short var_18 = (unsigned short)26524;
short var_19 = (short)18061;
int zero = 0;
short var_20 = (short)-18155;
unsigned int var_21 = 216038458U;
long long int var_22 = 7613374297426765272LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
