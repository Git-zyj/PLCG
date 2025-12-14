#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8561281785037673413LL;
unsigned short var_2 = (unsigned short)24879;
short var_3 = (short)-14140;
long long int var_4 = 7171240131208149167LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -6564456520845633692LL;
unsigned char var_10 = (unsigned char)104;
unsigned int var_12 = 1003003553U;
unsigned int var_13 = 282987824U;
unsigned char var_14 = (unsigned char)57;
short var_15 = (short)-10373;
unsigned char var_17 = (unsigned char)126;
int zero = 0;
unsigned short var_18 = (unsigned short)33686;
long long int var_19 = -7404852159860380228LL;
long long int var_20 = -3277326706678016543LL;
void init() {
}

void checksum() {
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
