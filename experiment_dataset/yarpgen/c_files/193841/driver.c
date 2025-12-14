#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7061464360994465853ULL;
signed char var_4 = (signed char)-30;
long long int var_5 = 5091711054009014815LL;
unsigned short var_9 = (unsigned short)928;
unsigned int var_10 = 1687658604U;
unsigned long long int var_11 = 11080933723235849165ULL;
unsigned long long int var_13 = 191420568327013103ULL;
signed char var_15 = (signed char)-107;
int zero = 0;
unsigned short var_16 = (unsigned short)25291;
short var_17 = (short)28334;
long long int var_18 = 1177364664742375244LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
