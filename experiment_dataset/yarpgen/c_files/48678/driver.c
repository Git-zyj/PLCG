#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47590;
unsigned int var_4 = 3797116679U;
short var_6 = (short)8319;
int zero = 0;
unsigned long long int var_10 = 12101104669585778543ULL;
long long int var_11 = 4703773201778705197LL;
unsigned long long int var_12 = 16736204863091461014ULL;
signed char var_13 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
