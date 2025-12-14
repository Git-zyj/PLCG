#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)223;
short var_3 = (short)-28188;
signed char var_4 = (signed char)92;
unsigned long long int var_5 = 9108872365305558708ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 4342820065385423602ULL;
long long int var_11 = 7923492124393389854LL;
short var_15 = (short)-2931;
long long int var_16 = 1926231780875114275LL;
int zero = 0;
int var_17 = 326270174;
long long int var_18 = -3973458577729034958LL;
long long int var_19 = 1632804602032937251LL;
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
