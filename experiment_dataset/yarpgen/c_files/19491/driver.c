#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
long long int var_1 = -8972517579457316052LL;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)141;
long long int var_6 = -1209005938651131779LL;
long long int var_9 = 3482865268879813280LL;
short var_10 = (short)16195;
unsigned long long int var_11 = 2547156775338145064ULL;
unsigned char var_12 = (unsigned char)230;
unsigned long long int var_14 = 3358135163538755716ULL;
int zero = 0;
short var_16 = (short)-29187;
int var_17 = -814065448;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
