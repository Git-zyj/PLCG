#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
unsigned int var_2 = 6016156U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-123;
unsigned char var_7 = (unsigned char)160;
short var_8 = (short)-25936;
signed char var_9 = (signed char)118;
signed char var_10 = (signed char)-9;
unsigned char var_11 = (unsigned char)119;
unsigned int var_13 = 1544584459U;
unsigned short var_14 = (unsigned short)3934;
signed char var_15 = (signed char)-119;
long long int var_16 = 2747676486477000684LL;
int zero = 0;
long long int var_17 = 2527330294561481938LL;
long long int var_18 = -8339957063845827951LL;
int var_19 = 48562490;
signed char var_20 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
