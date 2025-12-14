#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3018760568519822981LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 2514224135410844118ULL;
int var_6 = 509556574;
unsigned short var_15 = (unsigned short)17844;
int zero = 0;
short var_17 = (short)-13833;
unsigned long long int var_18 = 12247681953260259412ULL;
short var_19 = (short)20450;
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
