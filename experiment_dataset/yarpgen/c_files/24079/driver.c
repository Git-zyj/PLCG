#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10455109800674941509ULL;
unsigned long long int var_1 = 7682384777909214154ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-24980;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 13990782521311204158ULL;
unsigned long long int var_8 = 4409070846150326061ULL;
unsigned int var_9 = 115816011U;
signed char var_10 = (signed char)123;
short var_11 = (short)5732;
unsigned char var_12 = (unsigned char)77;
unsigned long long int var_13 = 7220523086205437490ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3780673593U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-33;
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
