#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16311622922981733856ULL;
unsigned char var_2 = (unsigned char)104;
long long int var_3 = 1489897927666046669LL;
signed char var_7 = (signed char)-17;
int var_8 = -1613106854;
int var_9 = -1655563803;
signed char var_10 = (signed char)-20;
unsigned long long int var_12 = 12115509831528436233ULL;
long long int var_13 = 3130575796969050974LL;
unsigned long long int var_14 = 7839278885907885887ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 434170410U;
int zero = 0;
unsigned short var_18 = (unsigned short)50025;
unsigned long long int var_19 = 18375554981578098135ULL;
unsigned long long int var_20 = 3940086962407272136ULL;
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
