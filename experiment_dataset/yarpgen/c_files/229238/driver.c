#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned long long int var_2 = 9568042930226394419ULL;
unsigned long long int var_3 = 2767937113649158276ULL;
unsigned int var_6 = 821752980U;
signed char var_10 = (signed char)7;
unsigned char var_12 = (unsigned char)197;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_17 = -2134515092;
long long int var_18 = -4309977170783041030LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
