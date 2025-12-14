#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)153;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 9260353172767470291ULL;
unsigned char var_8 = (unsigned char)202;
unsigned long long int var_11 = 9460809349342594202ULL;
int zero = 0;
short var_15 = (short)12707;
_Bool var_16 = (_Bool)0;
long long int var_17 = 8973295045375335921LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
