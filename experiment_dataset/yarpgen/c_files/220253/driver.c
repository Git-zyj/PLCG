#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13883429573587135041ULL;
unsigned short var_3 = (unsigned short)6383;
short var_5 = (short)14202;
unsigned short var_8 = (unsigned short)23613;
long long int var_9 = 6917223226135981625LL;
short var_10 = (short)32229;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)60482;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)127;
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
