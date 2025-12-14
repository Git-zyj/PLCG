#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)112;
unsigned int var_6 = 109905060U;
unsigned long long int var_7 = 16714111916152453233ULL;
long long int var_8 = 2552899432575248288LL;
short var_10 = (short)-10507;
long long int var_12 = -4254387195651213577LL;
unsigned short var_13 = (unsigned short)50138;
int zero = 0;
long long int var_14 = -1643824215585147811LL;
signed char var_15 = (signed char)123;
void init() {
}

void checksum() {
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
