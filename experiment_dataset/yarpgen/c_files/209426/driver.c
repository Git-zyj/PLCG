#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24408;
short var_1 = (short)-18139;
short var_2 = (short)28976;
unsigned short var_4 = (unsigned short)24828;
int var_5 = 1054616470;
int var_6 = -1310367917;
short var_7 = (short)-30002;
unsigned short var_8 = (unsigned short)44109;
unsigned short var_10 = (unsigned short)49641;
unsigned int var_11 = 542806155U;
unsigned short var_13 = (unsigned short)56108;
int var_14 = -1022762714;
unsigned char var_15 = (unsigned char)194;
short var_16 = (short)-4913;
int zero = 0;
unsigned int var_17 = 3572411997U;
unsigned long long int var_18 = 3247900126541764252ULL;
unsigned long long int var_19 = 5702738056258659306ULL;
int var_20 = -493637517;
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
