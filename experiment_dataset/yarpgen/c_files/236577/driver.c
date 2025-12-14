#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2613677939335156533ULL;
unsigned long long int var_2 = 5955413054788483148ULL;
unsigned long long int var_3 = 9115208422514791357ULL;
unsigned long long int var_4 = 7610559535941041219ULL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -1244452845071245540LL;
unsigned char var_7 = (unsigned char)71;
short var_8 = (short)-7042;
unsigned long long int var_9 = 16991969836720752137ULL;
unsigned char var_10 = (unsigned char)101;
long long int var_12 = -1909620597810476300LL;
unsigned long long int var_13 = 10277648930748453277ULL;
int var_14 = 188035159;
int zero = 0;
long long int var_16 = -7548635799216064589LL;
unsigned char var_17 = (unsigned char)226;
unsigned long long int var_18 = 4240733863310790683ULL;
long long int var_19 = -1628714024347830946LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
