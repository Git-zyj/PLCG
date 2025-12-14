#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20761;
long long int var_2 = -6965551429690699591LL;
signed char var_4 = (signed char)-40;
int zero = 0;
short var_19 = (short)-21222;
unsigned long long int var_20 = 14371889706436131902ULL;
unsigned short var_21 = (unsigned short)38676;
int var_22 = 1507893136;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
