#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6749366683180646930ULL;
long long int var_1 = -1786719212088007206LL;
signed char var_2 = (signed char)-40;
short var_3 = (short)-27205;
unsigned long long int var_4 = 16617194866405027689ULL;
unsigned long long int var_5 = 8467153487384448788ULL;
long long int var_6 = -7325412037476680205LL;
unsigned long long int var_9 = 892321045154193619ULL;
unsigned long long int var_10 = 14669993027872820937ULL;
unsigned long long int var_11 = 3152585406471860721ULL;
unsigned long long int var_14 = 14704456926841587059ULL;
unsigned short var_15 = (unsigned short)44880;
unsigned long long int var_16 = 8840641976564763390ULL;
int zero = 0;
int var_17 = -346519838;
signed char var_18 = (signed char)88;
unsigned long long int var_19 = 9855889102886413535ULL;
unsigned long long int var_20 = 7279884123206678434ULL;
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
